# SkyFood-V2

1. Install Ubuntu with ROS2 and Gazebo ✅
2. Create a simulated robot chassis with lidar and generic IMU ✅
3. Localization and SLAM packages working ✅
4. Autonomous navigation from point A to point B, and hyperparameter optimization
5. Saving and loading maps in functions
6. Saving points of interest and base, and functions for navigating to points
7. Behavior tree, create behavior for base loading
8. Create behavior to open and close doors
9. Sound playback
10. Docker and Docker Compose
11. Make the RPLidar work correctly ✅
12. Integration with motor drivers
13. OAK4 camera communication tests on Luxonis Hub ✅
14. Computer vision app;  Object detection, proximity detection and IMU topic exposure ✅
15. Train dock detection model
16. Force stop by proximity detection and slope detection
17. Microphone communication tests ✅
18. Motor driver communication tests
19. Door servo motor tests
20. LiveKit and local conversational AI
21. AI with function calls for autonomous control and decision making
22. Final screen software
23. Environment installation on Jetson
24. Assembly on physical chassis
25. Integrate all physical hardware into the main code and get it running, driver parameter tuning
26. Integration with the application for mission control and debugging
27. Integration with elevator systems (isolated)
28. Elevator call and floor change behavior
29. Integration with AlphaCode platform
30. Observability LGTM stack

FUTURE: Map synchronization, fleet management, etc.

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
