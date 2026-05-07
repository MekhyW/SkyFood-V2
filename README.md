# SkyFood-V2

1. Install Ubuntu with ROS2 and Gazebo ✅
2. Create a simulated robot chassis with lidar and generic IMU ✅
3. Localization and SLAM packages working ✅
4. Autonomous navigation from point A to point B ✅
5. Hyperparameter optimization for nav2 ✅
6. Denoise layer for local costmap, before inflation layer ✅
7. Saving and loading maps in functions ✅
8. Saving points of interest and docking stations, and functions for navigating to points ✅
9. Create behavior for autodocking with opennav_docking ❌
10. Create behavior for opening and closing doors ✅
11. Sound playback behavior ✅
12. Docker and Docker Compose ✅
13. RPLidar package ✅
14. Adoption of ros2_control for complete hardware abstraction and swappability ❌
15. Integration with motor drivers via ros2_control ❌
16. OAK4 camera communication tests on Luxonis Hub ✅
17. Computer vision app; face/person detection, proximity detection and IMU topic exposure ✅
18. A075V floor camera package ✅
19. Force stop by proximity detection and slope detection (depth map fusion) ❌
20. Groot2 for complex behavior trees, instead of py_trees ✅
21. Microphone test ✅
22. Motor driver tests ❌
23. Door compartment servo motor tests ❌
24. Door compartment interaction via ros2_control ❌
25. Battery measurer integration via ros2_control (trigger docking when battery low) ❌
26. Wireless controller via ros2_control and teleop_twist_joy ❌
27. Final screen softwares (React) ❌
28. LiveKit and local conversational AI ❌
29. AI with function calls for autonomous control and decision making ❌
30. 4G setup with netbird client ❌
31. Environment installation on Jetson ❌
32. Assembly on physical chassis ❌
33. Get integrated hardware and drivers running, driver parameter tuning ❌
34. Cloud Bridge / API Gateway for mission control (receiving high-abstraction BT missions) ❌
35. Integration with elevator systems (isolated) ❌
36. Elevator call and negotiation behaviors ❌
37. Hot-swappable Behavior Trees (on-the-fly mission swapping and interruption) ❌
38. Dynamic System Orchestrator (seamless transition between Mapping and Localization) ❌
39. Observability Foxglove stack ❌
40. Keep-out zones with editor options ❌
41. Dynamic human follow-me (FollowObject action server integration with computer vision) ❌


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
ros2 launch robot_description robot_description.launch.py # Robot and virtual world
ros2 launch rm_localization ekf.launch.py # Sensor fusion
ros2 launch rm_localization amcl.launch.py # IF EXISTING MAP: AMCL localization
ros2 launch rm_slam slam.launch.py # IF NO MAP: SLAM
ros2 run teleop_twist_keyboard teleop_twist_keyboard # Manual control
ros2 launch rm_navigation navigation.launch.py # Automatic navigation
ros2 launch rm_behaviors behaviors.launch.py # Spin up map, audio, and POI servers

# Sample tree execution
ros2 launch rm_mission_bt mission.launch.py # Execute the delivery logic tree
```
