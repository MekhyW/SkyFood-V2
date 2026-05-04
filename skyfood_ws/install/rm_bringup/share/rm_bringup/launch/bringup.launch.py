import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.conditions import IfCondition, UnlessCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    # Launch Configurations
    use_sim_time = LaunchConfiguration('use_sim_time')
    run_slam = LaunchConfiguration('slam')
    run_mission = LaunchConfiguration('run_mission')

    # Path setup
    robot_desc_dir = get_package_share_directory('robot_description')
    localization_dir = get_package_share_directory('rm_localization')
    slam_dir = get_package_share_directory('rm_slam')
    navigation_dir = get_package_share_directory('rm_navigation')
    behaviors_dir = get_package_share_directory('rm_behaviors')
    mission_dir = get_package_share_directory('rm_mission_bt')

    # Arguments
    declare_use_sim_time_cmd = DeclareLaunchArgument('use_sim_time', default_value='true', description='Use simulation (Gazebo) clock if true') # Assuming gazebo simulation by default for now
    declare_slam_cmd = DeclareLaunchArgument('slam', default_value='false', description='Whether to run SLAM (true) or AMCL (false)')
    declare_run_mission_cmd = DeclareLaunchArgument('run_mission', default_value='false', description='Whether to automatically start the mission behavior tree')

    # Launch descriptions
    robot_description_cmd = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(robot_desc_dir, 'launch', 'robot_description.launch.py')))
    ekf_cmd = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(localization_dir, 'launch', 'ekf.launch.py')))
    amcl_cmd = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(localization_dir, 'launch', 'amcl.launch.py')), condition=UnlessCondition(run_slam), launch_arguments={'use_sim_time': use_sim_time, 'params_file': os.path.join(localization_dir, 'config', 'amcl_params.yaml'), 'map': os.path.join(localization_dir, 'map', 'my_map.yaml')}.items())
    slam_cmd = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(slam_dir, 'launch', 'slam.launch.py')), condition=IfCondition(run_slam))
    navigation_cmd = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(navigation_dir, 'launch', 'navigation.launch.py')), launch_arguments={'use_sim_time': use_sim_time}.items())
    behaviors_cmd = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(behaviors_dir, 'launch', 'behaviors.launch.py')))
    mission_cmd = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(mission_dir, 'launch', 'mission.launch.py')), condition=IfCondition(run_mission))

    ld = LaunchDescription()

    # Declare the launch options
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_slam_cmd)
    ld.add_action(declare_run_mission_cmd)
    
    # Add the actions to launch all of the included files
    delayed_nodes = TimerAction(
        period=8.0,
        actions=[
            ekf_cmd,
            amcl_cmd,
            slam_cmd,
            navigation_cmd,
            behaviors_cmd,
            mission_cmd
        ]
    )
    ld.add_action(robot_description_cmd)
    ld.add_action(delayed_nodes)

    return ld
