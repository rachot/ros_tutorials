#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>

int main(int argc, char **argv)
{

  ros::init(argc, argv, "pub_node");
  ros::NodeHandle n;
  ros::Publisher msg_pub = n.advertise<std_msgs::String>("pubmsg", 1000);
  ros::Rate loop_rate(10);

  int count = 0;
  while (ros::ok())
  {

    std_msgs::String msg;

    std::stringstream ss;
    ss << "Hello ROS" << count;
    msg.data = ss.str();

    ROS_INFO("%s", msg.data.c_str());

    msg_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}
