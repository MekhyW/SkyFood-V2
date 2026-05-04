"""
map_manager.py
==============
ROS2 node that exposes two services:

  /map_manager/save_map  (rm_interfaces/srv/SaveMap)
      Saves the current occupancy grid map to disk using the Nav2
      map_saver_cli subprocess.  Files <map_name>.pgm + <map_name>.yaml
      are written to <save_path>.

  /map_manager/load_map  (rm_interfaces/srv/LoadMap)
      Hot-reloads a previously saved map into the running map_server
      by calling /map_server/load_map (nav2_msgs/srv/LoadMap).

Usage
-----
  ros2 run rm_behaviors map_manager
"""

import os
import subprocess
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from nav2_msgs.srv import LoadMap as Nav2LoadMap
from rm_interfaces.srv import SaveMap, LoadMap


class MapManagerNode(Node):
    """Manages save / load lifecycle for occupancy grid maps."""

    def __init__(self) -> None:
        super().__init__('map_manager')
        cbg = ReentrantCallbackGroup()
        self._save_srv = self.create_service(SaveMap, '/map_manager/save_map', self._handle_save_map, callback_group=cbg)
        self._load_srv = self.create_service(LoadMap, '/map_manager/load_map', self._handle_load_map, callback_group=cbg)
        self._nav2_load_client = self.create_client(Nav2LoadMap, '/map_server/load_map', callback_group=cbg) # Client for Nav2's map_server load service.
        self.get_logger().info('MapManager ready — save/load map services active.')

    # ------------------------------------------------------------------
    # Handlers
    # ------------------------------------------------------------------

    def _handle_save_map(self, request: SaveMap.Request, response: SaveMap.Response) -> SaveMap.Response:
        """Call map_saver_cli as a subprocess to persist the current map."""
        save_path = os.path.expanduser(request.save_path)
        os.makedirs(save_path, exist_ok=True)
        stem = os.path.join(save_path, request.map_name)
        cmd = ['ros2', 'run', 'nav2_map_saver', 'map_saver_cli', '-f', stem, '--ros-args', '-p', 'save_map_timeout:=5.0']
        self.get_logger().info(f'Saving map: {stem}.*')
        try:
            result = subprocess.run(cmd, capture_output=True, text=True, timeout=15)
            if result.returncode == 0:
                response.success = True
                response.message = f'Map saved to {stem}.yaml / {stem}.pgm'
                self.get_logger().info(response.message)
            else:
                response.success = False
                response.message = f'map_saver_cli failed: {result.stderr}'
                self.get_logger().error(response.message)
        except subprocess.TimeoutExpired:
            response.success = False
            response.message = 'map_saver_cli timed out'
            self.get_logger().error(response.message)
        except Exception as exc:  # noqa: BLE001
            response.success = False
            response.message = f'Unexpected error: {exc}'
            self.get_logger().error(response.message)
        return response

    def _handle_load_map(self, request: LoadMap.Request, response: LoadMap.Response) -> LoadMap.Response:
        """Forward the load request to Nav2's map_server."""
        map_path = os.path.expanduser(request.map_path)
        if not os.path.isfile(map_path):
            response.success = False
            response.message = f'Map file not found: {map_path}'
            self.get_logger().error(response.message)
            return response
        if not self._nav2_load_client.wait_for_service(timeout_sec=5.0):
            response.success = False
            response.message = '/map_server/load_map service not available'
            self.get_logger().error(response.message)
            return response
        nav2_req = Nav2LoadMap.Request()
        nav2_req.map_url = map_path
        self.get_logger().info(f'Loading map: {map_path}')
        future = self._nav2_load_client.call_async(nav2_req)
        rclpy.spin_until_future_complete(self, future, timeout_sec=10.0)
        if future.done():
            nav2_resp = future.result() # LoadMap result: 0 = RESULT_SUCCESS, 255 = RESULT_UNDEFINED_FAILURE
            if nav2_resp.result == 0:
                response.success = True
                response.message = f'Map loaded from {map_path}'
                self.get_logger().info(response.message)
            else:
                response.success = False
                response.message = f'map_server returned error code {nav2_resp.result}'
                self.get_logger().error(response.message)
        else:
            response.success = False
            response.message = 'Timed out waiting for map_server/load_map'
            self.get_logger().error(response.message)
        return response


def main(args=None) -> None:
    rclpy.init(args=args)
    node = MapManagerNode()
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
