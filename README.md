# SkyFood-V2

1. Install Ubuntu with ROS2 and Gazebo ✅
2. Create a simulated robot chassis with lidar and generic IMU ✅
3. Localization and SLAM packages working ✅
4. Autonomous navigation from point A to point B ✅
5. Hyperparameter optimization for nav2 ✅
6. Saving and loading maps in functions ✅
7. Saving points of interest and docking stations, and functions for navigating to points ✅
8. Create behavior for autodocking with opennav_docking
9. Create behavior for opening and closing doors ✅
10. Sound playback ✅
11. Docker and Docker Compose ✅
12. RPLidar package ✅
13. Adoption of ros2_control for complete hardware abstraction and swappability
14. Integration with motor drivers via ros2_control
15. OAK4 camera communication tests on Luxonis Hub ✅
16. Computer vision app; face/person detection, proximity detection and IMU topic exposure ✅
17. A075V floor camera package ✅
18. Force stop by proximity detection and slope detection (depth map fusion)
19. Microphone communication tests ✅
20. Motor driver communication tests
21. Door compartment servo motor tests
22. Door compartment interaction via ros2_control
23. Battery measurer integration via ros2_control
24. LiveKit and local conversational AI
25. AI with function calls for autonomous control and decision making
26. Final screen software
27. 4G setup with netbird client 
28. Environment installation on Jetson
29. Assembly on physical chassis
30. Get integrated hardware and drivers running, driver parameter tuning
31. API Gateway for mission control and debugging (Interface contract compatible with V1 API)
32. Integration with elevator systems (isolated)
33. Elevator call and floor change behavior
34. Integration with AlphaCode platform
35. Observability Foxglove stack

## Packages

1. **`rm_bringup`**: Master launch file that brings up all the other packages, with mode for simulation and real robot.
2. **`robot_description`**: Contains the robot description for the simulated robot.
3. **`rm_localization`**: Contains the EKF and AMCL nodes for localization in maps.
4. **`rm_slam`**: Contains the SLAM nodes for creating maps.
5. **`rm_navigation`**: Contains the Nav2 nodes for autonomous navigation.
6. **`rm_interfaces`**: Contains custom `.srv` (SaveMap, LoadMap, SavePOI, PlaySound) and `.action` (NavigateToPOI) definitions used by the high-level logic.
7. **`rm_behaviors`**: Exposes atomic "skills" as ROS 2 nodes. These nodes encapsulate complex sub-processes (like calling OS-level audio APIs or driving Nav2 with feedback). 
   - `map_manager`: Maps `nav2_map_saver` to an API.
   - `poi_manager`: Provides persistent, named coordinate saving (JSON) and an action server for routing to POIs.
   - `sound_player`: Interfaces with `paplay`/`aplay`/`ffplay` for blocking or background audio.
8. **`rm_mission_bt`**: A `py_trees_ros` behavior tree implementation. It contains individual py_trees leaf `Behaviour` classes that bind to the clients in `rm_behaviors` and sequence them to form full delivery or exploration logic (e.g. `mission_runner.py`).
9. **`rplidar_ros`**: ROS2 node for SLAMTEC RPLIDAR.
10. **`sipeed_tof`**: ROS2 package for SIPEED MaixSense-A075V depth camera.

## Launch

```bash
cd skyfood_ws
source install/setup.bash
```

### Docker Deployment (Production)
For reproducible deployments, use the provided build script. it automatically detects if you are on a PC or a Jetson and selects the optimized base image.
```bash
chmod +x build_docker.sh
./build_docker.sh
docker compose up -d
```

To run the SLAM mapping mode inside docker, you can temporarily override the command:
```bash
docker compose run --rm skyfood_robot ros2 launch rm_bringup bringup.launch.py slam:=true
```

### Bringup command
```bash
ros2 launch rm_bringup bringup.launch.py # Start all systems
```

### Manual commands

```bash
# Core systems
ros2 launch robot_description robot_description.launch.py # Robot and virtual world
ros2 launch rm_localization ekf.launch.py # Sensor fusion
ros2 launch rm_localization amcl.launch.py # IF EXISTING MAP: AMCL localization
ros2 launch rm_slam slam.launch.py # IF NO MAP: SLAM
ros2 run teleop_twist_keyboard teleop_twist_keyboard # Manual control
ros2 launch rm_navigation navigation.launch.py # Automatic navigation

# High-Level behaviors
ros2 launch rm_behaviors behaviors.launch.py # Spin up map, audio, and POI servers
ros2 launch rm_mission_bt mission.launch.py # Execute the delivery logic tree
```
