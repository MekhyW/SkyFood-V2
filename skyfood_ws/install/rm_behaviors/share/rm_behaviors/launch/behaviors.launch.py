"""
behaviors.launch.py
===================
Launches all atomic behavior nodes together:
  - map_manager   → /map_manager/save_map, /map_manager/load_map
  - poi_manager   → /poi_manager/navigate_to_poi (action), save/delete/list services
  - sound_player  → /sound_player/play

Parameters can be overridden on the command line, e.g.:
  ros2 launch rm_behaviors behaviors.launch.py \
    pois_file:=/data/maps/pois.json \
    use_sim_time:=false
"""

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    use_sim_time = LaunchConfiguration('use_sim_time')
    pois_file = LaunchConfiguration('pois_file')
    default_pois = os.path.join(get_package_share_directory('rm_behaviors'), 'config', 'pois.json')

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true', description='Use simulation (Gazebo) clock'),
        DeclareLaunchArgument('pois_file', default_value=default_pois, description='Absolute path to the JSON file storing named POIs'),
        Node(package='rm_behaviors', executable='map_manager', name='map_manager', output='screen', parameters=[{'use_sim_time': use_sim_time}]),
        Node(package='rm_behaviors', executable='poi_manager', name='poi_manager', output='screen', parameters=[{'use_sim_time': use_sim_time, 'pois_file': pois_file}]),
        Node(package='rm_behaviors', executable='sound_player', name='sound_player', output='screen', parameters=[{'use_sim_time': use_sim_time}]),
    ])
