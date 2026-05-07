cmake_minimum_required(VERSION 3.8)
project(rm_mission_bt)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ── Find dependencies ────────────────────────────────────────────────────────
find_package(ament_cmake    REQUIRED)
find_package(rclcpp         REQUIRED)
find_package(rclcpp_action  REQUIRED)
find_package(behaviortree_cpp REQUIRED)   # BT.CPP v4  (ros-humble-behaviortree-cpp)
find_package(ament_index_cpp REQUIRED)
find_package(rm_interfaces  REQUIRED)
find_package(geometry_msgs  REQUIRED)

set(dependencies
  rclcpp
  rclcpp_action
  behaviortree_cpp
  ament_index_cpp
  rm_interfaces
  geometry_msgs
)

# ── BT plugin shared library ─────────────────────────────────────────────────
# All leaf nodes are compiled into one shared library.  The factory in
# mission_runner links against it directly; alternatively it could be
# loaded as a plugin via pluginlib (future work).
add_library(rm_bt_plugins SHARED
  src/navigate_to_poi_node.cpp
  src/play_sound_node.cpp
  src/save_map_node.cpp
  src/control_compartment_node.cpp
)
target_include_directories(rm_bt_plugins PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
ament_target_dependencies(rm_bt_plugins ${dependencies})

# ── Mission runner executable ────────────────────────────────────────────────
add_executable(mission_runner src/mission_runner.cpp)
target_include_directories(mission_runner PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
ament_target_dependencies(mission_runner ${dependencies})
target_link_libraries(mission_runner rm_bt_plugins)

# ── Install ──────────────────────────────────────────────────────────────────
install(TARGETS rm_bt_plugins
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install(TARGETS mission_runner
  DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY include/
  DESTINATION include
)
install(DIRECTORY bt_xml/
  DESTINATION share/${PROJECT_NAME}/bt_xml
)
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)
install(FILES resource/${PROJECT_NAME}
  DESTINATION share/ament_index/resource_index/packages
)
install(FILES package.xml
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
