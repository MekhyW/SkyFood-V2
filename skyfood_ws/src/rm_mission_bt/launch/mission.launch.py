"""
mission.launch.py
=================
Launches the SkyFood mission runner.

Arguments
---------
  bt_xml       : Path to the BT XML file (default: package share delivery_mission.xml)
  groot2_port  : ZMQ port for Groot2 live monitoring (default: 1667)
  tick_hz      : Behavior tree tick rate in Hz (default: 10.0)

Examples
--------
  # Run the default delivery mission
  ros2 launch rm_mission_bt mission.launch.py

  # Run a custom mission tree
  ros2 launch rm_mission_bt mission.launch.py bt_xml:=/home/user/my_tree.xml

  # Change the tick rate
  ros2 launch rm_mission_bt mission.launch.py tick_hz:=5.0
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    pkg_share = get_package_share_directory('rm_mission_bt')
    default_xml = os.path.join(pkg_share, 'bt_xml', 'delivery_mission.xml')
    return LaunchDescription([
        DeclareLaunchArgument('bt_xml', default_value=default_xml, description='Absolute path to the BT XML file to execute'),
        DeclareLaunchArgument('groot2_port', default_value='1667', description='ZMQ port for Groot2 live monitoring'),
        DeclareLaunchArgument('tick_hz', default_value='10.0', description='Behavior tree tick frequency in Hz'),
        Node(
            package='rm_mission_bt',
            executable='mission_runner',
            name='mission_runner',
            output='screen',
            parameters=[{
                'bt_xml':      LaunchConfiguration('bt_xml'),
                'groot2_port': LaunchConfiguration('groot2_port'),
                'tick_hz':     LaunchConfiguration('tick_hz'),
            }],
        ),
    ])
