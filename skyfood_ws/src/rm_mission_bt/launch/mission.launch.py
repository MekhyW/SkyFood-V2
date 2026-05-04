import os
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='rm_mission_bt',
            executable='mission_runner',
            name='mission_runner',
            output='screen',
        )
    ])
