"""
behaviors/save_map.py
=====================
py_trees Behaviour that calls /map_manager/save_map and blocks until
the service responds.

  from rm_mission_bt.behaviors.save_map import SaveMap

  save = SaveMap(name='Save warehouse map', map_name='warehouse_v1', save_path='/data/maps')
"""

import py_trees
import rclpy
from rclpy.node import Node
from rm_interfaces.srv import SaveMap as SaveMapSrv


class SaveMap(py_trees.behaviour.Behaviour):
    """
    Leaf behaviour — save the current occupancy grid map.

    Returns
    -------
    SUCCESS  map was saved successfully
    FAILURE  service call failed or service not available
    RUNNING  (never — this behaviour is synchronous)
    """

    def __init__(self, name: str, node: Node, map_name: str, save_path: str) -> None:
        super().__init__(name)
        self._node = node
        self._map_name = map_name
        self._save_path = save_path
        self._client = node.create_client(SaveMapSrv, '/map_manager/save_map')

    # ------------------------------------------------------------------
    def setup(self, **kwargs) -> None:  # noqa: ANN003
        """Called once before the first tick — ensure service is up."""
        if not self._client.wait_for_service(timeout_sec=5.0):
            raise RuntimeError('/map_manager/save_map service not available (timeout 5 s)')

    def update(self) -> py_trees.common.Status:
        req = SaveMapSrv.Request()
        req.map_name = self._map_name
        req.save_path = self._save_path
        future = self._client.call_async(req)
        rclpy.spin_until_future_complete(self._node, future, timeout_sec=15.0)
        if not future.done():
            self.feedback_message = 'Timed out waiting for map_manager/save_map'
            return py_trees.common.Status.FAILURE
        resp = future.result()
        self.feedback_message = resp.message
        if resp.success:
            return py_trees.common.Status.SUCCESS
        return py_trees.common.Status.FAILURE
