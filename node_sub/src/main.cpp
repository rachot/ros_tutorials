#include "ros/ros.h"
#include "std_msgs/String.h"


void MsgCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("Subscribe messages : %s", msg->data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "sub_node");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("pubmsg", 1000, MsgCallback);

  ros::spin();

  return 0;
}

