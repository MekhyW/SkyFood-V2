"""
behaviors/navigate_to_poi.py
============================
py_trees Behaviour that sends a NavigateToPOI goal and waits for it to
complete, publishing RUNNING feedback every tick while navigating.

  from rm_mission_bt.behaviors.navigate_to_poi import NavigateToPOI

  go_kitchen = NavigateToPOI(name='Go to kitchen', node=node, poi_name='kitchen_pickup')
"""

import py_trees
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rm_interfaces.action import NavigateToPOI as NavigateToPOIAction


class NavigateToPOI(py_trees.behaviour.Behaviour):
    """
    Leaf behaviour — navigate to a named POI.

    State machine
    -------------
    RUNNING  → goal is in flight; feedback is streamed to the blackboard
    SUCCESS  → robot reached the POI
    FAILURE  → POI unknown / Nav2 rejected / action server unavailable
    """

    def __init__(self, name: str, node: Node, poi_name: str) -> None:
        super().__init__(name)
        self._node = node
        self._poi_name = poi_name
        self._action_client = ActionClient(node, NavigateToPOIAction, '/poi_manager/navigate_to_poi')
        self._goal_handle = None
        self._result_future = None
        self._distance = 0.0

    def setup(self, **kwargs) -> None:  # noqa: ANN003
        if not self._action_client.wait_for_server(timeout_sec=5.0):
            raise RuntimeError('/poi_manager/navigate_to_poi action server not available')

    def initialise(self) -> None:
        """Send the goal on the first tick (RUNNING entry)."""
        self._goal_handle = None
        self._result_future = None
        goal = NavigateToPOIAction.Goal()
        goal.poi_name = self._poi_name
        send_future = self._action_client.send_goal_async(goal, feedback_callback=self._on_feedback)
        rclpy.spin_until_future_complete(self._node, send_future, timeout_sec=5.0) # Block briefly until goal is accepted (or rejected)
        if send_future.done():
            self._goal_handle = send_future.result()
            if self._goal_handle.accepted:
                self._result_future = self._goal_handle.get_result_async()
                self.feedback_message = f"Navigating to '{self._poi_name}'"
            else:
                self.feedback_message = f"Goal rejected for POI '{self._poi_name}'"
        else:
            self.feedback_message = 'Timed out sending navigation goal'

    def update(self) -> py_trees.common.Status:
        if self._goal_handle is None or not self._goal_handle.accepted:
            return py_trees.common.Status.FAILURE
        if self._result_future is None or not self._result_future.done():
            self.feedback_message = f"Navigating to '{self._poi_name}' (~{self._distance:.1f} m remaining)"
            return py_trees.common.Status.RUNNING
        result = self._result_future.result()
        if result and result.result.success:
            self.feedback_message = f"Arrived at '{self._poi_name}'"
            return py_trees.common.Status.SUCCESS
        self.feedback_message = result.result.message if result else 'Navigation failed — no result'
        return py_trees.common.Status.FAILURE

    def terminate(self, new_status: py_trees.common.Status) -> None:
        """Cancel the goal if the tree preempts this behaviour."""
        if new_status == py_trees.common.Status.INVALID and self._goal_handle is not None and self._goal_handle.accepted:
            cancel_future = self._goal_handle.cancel_goal_async()
            rclpy.spin_until_future_complete(self._node, cancel_future, timeout_sec=3.0)

    def _on_feedback(self, feedback_msg) -> None:
        self._distance = feedback_msg.feedback.distance_remaining
