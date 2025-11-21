#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "control_turtlesim");
    ros::NodeHandle n;
    ros::Publisher publish = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel",1);
    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        geometry_msgs::Twist msg;
        msg.linear.x = 1;
        msg.linear.y = 1;
        publish.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}