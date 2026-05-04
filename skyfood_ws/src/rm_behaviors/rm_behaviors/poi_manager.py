"""
poi_manager.py
==============
ROS2 node that manages named Points Of Interest (POIs) and provides
navigation to them.  POIs are persisted as a JSON file so they survive
restarts.

Services exposed
----------------
  /poi_manager/save_poi    (rm_interfaces/srv/SavePOI)
  /poi_manager/delete_poi  (rm_interfaces/srv/DeletePOI)
  /poi_manager/list_pois   (rm_interfaces/srv/ListPOIs)

Actions exposed
---------------
  /poi_manager/navigate_to_poi  (rm_interfaces/action/NavigateToPOI)
      Navigates the robot to a named POI using Nav2's NavigateToPose
      action and streams distance_remaining feedback.

Parameters
----------
  pois_file  (string, default: ~/skyfood_pois.json)
      Absolute path to the JSON file used for persisting POIs.

Usage
-----
  ros2 run rm_behaviors poi_manager --ros-args -p pois_file:=/data/pois.json
"""

import json
import math
import os
import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from nav2_msgs.action import NavigateToPose
from rm_interfaces.action import NavigateToPOI
from rm_interfaces.srv import SavePOI, DeletePOI, ListPOIs


class POIManagerNode(Node):
    """Persists POIs and provides named-POI navigation."""

    def __init__(self) -> None:
        super().__init__('poi_manager')
        cbg = ReentrantCallbackGroup()
        self.declare_parameter('pois_file', os.path.expanduser('~/skyfood_pois.json'))
        self._pois_file: str = self.get_parameter('pois_file').value
        self._pois: dict[str, dict] = self._load_pois()
        self.create_service(SavePOI,   '/poi_manager/save_poi',   self._handle_save,   callback_group=cbg)
        self.create_service(DeletePOI, '/poi_manager/delete_poi', self._handle_delete, callback_group=cbg)
        self.create_service(ListPOIs,  '/poi_manager/list_pois',  self._handle_list,   callback_group=cbg)
        self._nav_client = rclpy.action.ActionClient(self, NavigateToPose, '/navigate_to_pose', callback_group=cbg)
        self._action_server = ActionServer(self, NavigateToPOI, '/poi_manager/navigate_to_poi', goal_callback=self._goal_callback, cancel_callback=self._cancel_callback, execute_callback=self._execute_navigate, callback_group=cbg)
        self.get_logger().info(f'POIManager ready — {len(self._pois)} POIs loaded from {self._pois_file}')

    # ══════════════════════════════════════════════════════════════════
    # POI persistence helpers
    # ══════════════════════════════════════════════════════════════════

    def _load_pois(self) -> dict:
        if os.path.isfile(self._pois_file):
            try:
                with open(self._pois_file) as f:
                    return json.load(f)
            except (json.JSONDecodeError, OSError) as exc:
                self.get_logger().warn(f'Could not load POIs: {exc} — starting fresh.')
        return {}

    def _save_pois(self) -> None:
        os.makedirs(os.path.dirname(os.path.abspath(self._pois_file)), exist_ok=True)
        with open(self._pois_file, 'w') as f:
            json.dump(self._pois, f, indent=2)

    def _pose_to_dict(self, pose: PoseStamped) -> dict:
        p = pose.pose.position
        o = pose.pose.orientation
        return {
            'frame_id': pose.header.frame_id,
            'x': p.x, 'y': p.y, 'z': p.z,
            'qx': o.x, 'qy': o.y, 'qz': o.z, 'qw': o.w,
        }

    def _dict_to_pose(self, d: dict) -> PoseStamped:
        ps = PoseStamped()
        ps.header.frame_id = d.get('frame_id', 'map')
        ps.header.stamp = self.get_clock().now().to_msg()
        ps.pose.position.x = d['x']
        ps.pose.position.y = d['y']
        ps.pose.position.z = d['z']
        ps.pose.orientation.x = d['qx']
        ps.pose.orientation.y = d['qy']
        ps.pose.orientation.z = d['qz']
        ps.pose.orientation.w = d['qw']
        return ps

    # ══════════════════════════════════════════════════════════════════
    # Service handlers
    # ══════════════════════════════════════════════════════════════════

    def _handle_save(self, req: SavePOI.Request, resp: SavePOI.Response) -> SavePOI.Response:
        self._pois[req.name] = self._pose_to_dict(req.pose)
        self._save_pois()
        resp.success = True
        resp.message = f"POI '{req.name}' saved."
        self.get_logger().info(resp.message)
        return resp

    def _handle_delete(self, req: DeletePOI.Request, resp: DeletePOI.Response) -> DeletePOI.Response:
        if req.name in self._pois:
            del self._pois[req.name]
            self._save_pois()
            resp.success = True
            resp.message = f"POI '{req.name}' deleted."
        else:
            resp.success = False
            resp.message = f"POI '{req.name}' not found."
        self.get_logger().info(resp.message)
        return resp

    def _handle_list(self, _req: ListPOIs.Request, resp: ListPOIs.Response) -> ListPOIs.Response:
        resp.names = list(self._pois.keys())
        resp.poses = [self._dict_to_pose(d) for d in self._pois.values()]
        return resp

    # ══════════════════════════════════════════════════════════════════
    # NavigateToPOI action server
    # ══════════════════════════════════════════════════════════════════

    def _goal_callback(self, goal: NavigateToPOI.Goal) -> GoalResponse:
        if goal.poi_name not in self._pois:
            self.get_logger().warn(f"NavigateToPOI: unknown POI '{goal.poi_name}'")
            return GoalResponse.REJECT
        self.get_logger().info(f"NavigateToPOI: accepted goal → '{goal.poi_name}'")
        return GoalResponse.ACCEPT

    def _cancel_callback(self, _goal_handle) -> CancelResponse:
        self.get_logger().info('NavigateToPOI: cancel requested')
        return CancelResponse.ACCEPT

    async def _execute_navigate(self, goal_handle) -> NavigateToPOI.Result:
        poi_name = goal_handle.request.poi_name
        self.get_logger().info(f"NavigateToPOI: navigating to '{poi_name}'")

        result = NavigateToPOI.Result()
        target_pose = self._dict_to_pose(self._pois[poi_name]) # Convert stored dict to PoseStamped
        nav_goal = NavigateToPose.Goal() # Build Nav2 NavigateToPose goal
        nav_goal.pose = target_pose
        nav_goal.behavior_tree = ''  # use default BT

        if not self._nav_client.wait_for_server(timeout_sec=5.0):
            goal_handle.abort()
            result.success = False
            result.message = '/navigate_to_pose action server not available'
            self.get_logger().error(result.message)
            return result

        send_goal_future = self._nav_client.send_goal_async(nav_goal, feedback_callback=lambda fb: self._nav_feedback(fb, goal_handle))
        nav_goal_handle = await send_goal_future
        if not nav_goal_handle.accepted:
            goal_handle.abort()
            result.success = False
            result.message = 'Nav2 rejected the navigation goal'
            return result

        nav_result_future = nav_goal_handle.get_result_async()

        # Poll for cancellation or Nav2 completion
        while rclpy.ok():
            if goal_handle.is_cancel_requested:
                await nav_goal_handle.cancel_goal_async()
                goal_handle.canceled()
                result.success = False
                result.message = 'Navigation cancelled by client'
                return result
            if nav_result_future.done():
                break
            await rclpy.task.Future()  # yield to executor

        nav_result = nav_result_future.result()
        if nav_result is not None:
            result.success = True
            result.message = f"Reached '{poi_name}'"
        else:
            result.success = False
            result.message = 'Navigation failed — no result returned'
        goal_handle.succeed()
        self.get_logger().info(result.message)
        return result

    def _nav_feedback(self, feedback_msg, goal_handle) -> None:
        fb_out = NavigateToPOI.Feedback()
        nav_fb = feedback_msg.feedback
        # Compute Euclidean distance to goal from current estimated pose
        dx = nav_fb.current_pose.pose.position.x - 0.0  # approximation
        fb_out.distance_remaining = getattr(nav_fb, 'distance_remaining', 0.0)
        fb_out.status = 'navigating'
        goal_handle.publish_feedback(fb_out)


def main(args=None) -> None:
    rclpy.init(args=args)
    node = POIManagerNode()
    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
