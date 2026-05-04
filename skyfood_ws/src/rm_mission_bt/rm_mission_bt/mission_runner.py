"""
mission_runner.py
=================
ROS2 node that builds and continuously ticks a py_trees behavior tree
representing the robot's high-level mission logic.

Usage
-----
  ros2 run rm_mission_bt mission_runner
"""

import time
import py_trees
import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rm_mission_bt.behaviors.navigate_to_poi import NavigateToPOI
from rm_mission_bt.behaviors.play_sound import PlaySound
from rm_mission_bt.behaviors.save_map import SaveMap


class MissionRunnerNode(Node):
    def __init__(self):
        super().__init__('mission_runner')
        self._root = self._create_tree() # Create the py_trees tree
        self._tree = py_trees.trees.BehaviourTree(self._root)
        self._tree.setup(timeout=15.0)
        self.get_logger().info('Mission behavior tree compiled. Ticking...')
        self._timer = self.create_timer(0.1, self._tick) # Tick at ~10Hz

    def _create_tree(self) -> py_trees.behaviour.Behaviour:
        """
        Construct a sample mission tree:
        1. Save the map after exploring
        2. Play an announcement
        3. Navigate to the kitchen
        4. Play completion sound
        """
        seq = py_trees.composites.Sequence(name='Delivery Mission', memory=True) # Resume from the node that returned RUNNING
        save_map = SaveMap(name='Save Map (Exploration Complete)', node=self, map_name='my_saved_map', save_path='/tmp')
        chime_start = PlaySound(name='Play Departure Chime', node=self, file_path='/opt/sounds/departure.wav', blocking=False)
        nav_kitchen = NavigateToPOI(name='Navigate to Kitchen POI', node=self, poi_name='kitchen_pickup')
        chime_end = PlaySound(name='Play Arrival Chime', node=self, file_path='/opt/sounds/arrival.wav', blocking=True)
        # Assemble the tree
        seq.add_children([save_map, chime_start, nav_kitchen, chime_end])
        return seq

    def _tick(self):
        """Tick the tree and log state transitions.
        If you need to print the BT state constantly (warning: noisy)
        print(py_trees.display.unicode_tree(self._root, show_status=True))"""
        self._tree.tick()
        if self._root.status == py_trees.common.Status.SUCCESS:
            self.get_logger().info('Mission complete! Tree returned SUCCESS.')
            self._timer.cancel()
        elif self._root.status == py_trees.common.Status.FAILURE:
            self.get_logger().error('Mission failed! Tree returned FAILURE.')
            self._timer.cancel()


def main(args=None):
    rclpy.init(args=args)
    node = MissionRunnerNode()
    executor = MultiThreadedExecutor() # We need a MTA so that the tick loop (Timer) doesn't block the async service/action callbacks used inside the behaviors.
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        node.get_logger().info('KeyboardInterrupt, shutting down...')
    finally:
        node._tree.interrupt()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
