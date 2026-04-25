import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    nav2_params_path = os.path.join(get_package_share_directory('rm_navigation'), 'config', 'nav2_params.yaml')

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true'),
        Node(package='nav2_controller', executable='controller_server', name='controller_server', output='screen', parameters=[nav2_params_path]),
        Node(package='nav2_planner', executable='planner_server', name='planner_server', output='screen', parameters=[nav2_params_path]),
        Node(package='nav2_bt_navigator', executable='bt_navigator', name='bt_navigator', output='screen', parameters=[nav2_params_path]),
        Node(package='nav2_behaviors', executable='behavior_server', name='recoveries_server', output='screen', parameters=[nav2_params_path]),
        Node(package='nav2_lifecycle_manager', executable='lifecycle_manager', name='lifecycle_manager_navigation', output='screen',
             parameters=[{'use_sim_time': True, 'autostart': True, 'node_names': ['controller_server', 'planner_server', 'bt_navigator', 'recoveries_server']}])
    ])