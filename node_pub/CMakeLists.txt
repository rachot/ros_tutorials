cmake_minimum_required(VERSION 2.8.3)
project(node_pub)


find_package(catkin REQUIRED COMPONENTS
  genmsg
  roscpp
  rospy
  std_msgs
)

add_message_files(DIRECTORY msg FILES data.msg)
add_service_files(DIRECTORY srv FILES CalData.srv)

generate_messages(DEPENDENCIES std_msgs)

catkin_package()

include_directories(${catkin_INCLUDE_DIRS})

add_executable(node_pub src/main.cpp)
target_link_libraries(node_pub ${catkin_LIBRARIES})
add_dependencies(node_pub beginner_tutorials_generate_messages_cpp)

