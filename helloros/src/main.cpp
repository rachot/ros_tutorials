#include "ros/ros.h"

int main(int argc,char **argv)
{
  ros::init(argc,argv,"helloros");
  ros::NodeHandle n;
  ros::Rate loop_rate(1);

  while(ros::ok())
  {
     ROS_INFO("Hello ROS");
     ros::spinOnce();
     loop_rate.sleep();
  }
  
  return 0;
}
