# SkyFood-V2

1. Install Ubuntu with ROS2 and Gazebo ✅
2. Create a simulated robot chassis with lidar and generic IMU ✅
3. Localization and SLAM packages working ✅
4. Autonomous navigation from point A to point B ✅
5. Hyperparameter optimization for nav2 
6. Saving and loading maps in functions
7. Saving points of interest and docking stations, and functions for navigating to points
8. Behavior tree, create behavior for autodocking with opennav_docking
9. Create behavior to open and close doors
10. Sound playback
11. Docker and Docker Compose
12. Make the RPLidar work correctly ✅
13. Integration with motor drivers
14. OAK4 camera communication tests on Luxonis Hub ✅
15. Computer vision app;  face/person detection, proximity detection and IMU topic exposure ✅
16. A075V floor camera setup
17. Force stop by proximity detection and slope detection (depth map fusion)
18. Microphone communication tests ✅
19. Motor driver communication tests
20. Door servo motor tests
21. LiveKit and local conversational AI
22. AI with function calls for autonomous control and decision making
23. Final screen software
24. 4G setup with netbird client 
25. Environment installation on Jetson
26. Assembly on physical chassis
27. Integrate all physical hardware into the main code and get it running, driver parameter tuning
28. Integration with the application for mission control and debugging
29. Integration with elevator systems (isolated)
30. Elevator call and floor change behavior
31. Integration with AlphaCode platform
32. Observability Foxglove stack

## Launch

```bash
cd skyfood_ws
source install/setup.bash
```

```bash
ros2 launch robot_description robot_description.launch.py # Robot and virtual world
ros2 launch rm_localization ekf.launch.py # Sensor fusion
ros2 launch rm_localization amcl.launch.py # IF EXISTING MAP: AMCL localization
ros2 launch rm_slam slam.launch.py # IF NO MAP: SLAM
ros2 run teleop_twist_keyboard teleop_twist_keyboard # Manual control
```
