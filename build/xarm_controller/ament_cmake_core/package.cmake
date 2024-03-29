set(_AMENT_PACKAGE_NAME "xarm_controller")
set(xarm_controller_VERSION "0.0.0")
set(xarm_controller_MAINTAINER "Vinman <vinman.cub@gmail.com>")
set(xarm_controller_BUILD_DEPENDS "hardware_interface" "pluginlib" "rclcpp" "rclcpp_action" "rclcpp_lifecycle" "std_msgs" "sensor_msgs" "controller_manager_msgs" "xarm_description" "xarm_msgs" "xarm_api")
set(xarm_controller_BUILDTOOL_DEPENDS "ament_cmake")
set(xarm_controller_BUILD_EXPORT_DEPENDS "hardware_interface" "pluginlib" "rclcpp" "rclcpp_action" "rclcpp_lifecycle" "std_msgs" "sensor_msgs" "controller_manager_msgs" "xarm_description" "xarm_msgs" "xarm_api")
set(xarm_controller_BUILDTOOL_EXPORT_DEPENDS )
set(xarm_controller_EXEC_DEPENDS "robot_state_publisher" "joint_state_publisher" "controller_manager" "rviz2" "xacro" "urdf" "launch" "launch_ros" "hardware_interface" "pluginlib" "rclcpp" "rclcpp_action" "rclcpp_lifecycle" "std_msgs" "sensor_msgs" "controller_manager_msgs" "xarm_description" "xarm_msgs" "xarm_api")
set(xarm_controller_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(xarm_controller_GROUP_DEPENDS )
set(xarm_controller_MEMBER_OF_GROUPS )
set(xarm_controller_DEPRECATED "")
set(xarm_controller_EXPORT_TAGS)
list(APPEND xarm_controller_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
