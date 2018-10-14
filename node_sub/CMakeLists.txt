cmake_minimum_required(VERSION 2.8.3)
project(node_sub)


find_package(catkin REQUIRED COMPONENTS
  genmsg
  roscpp
  rospy
  std_msgs
)


catkin_package()

include_directories(${catkin_INCLUDE_DIRS})

add_executable(node_sub src/main.cpp)
target_link_libraries(node_sub ${catkin_LIBRARIES})

