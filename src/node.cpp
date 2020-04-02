#include <ros/ros.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "node");
    ros::NodeHandle nh;

    auto rate = ros::Rate{10};

    while (ros::ok())
    {
        ros::spinOnce();
        rate.sleep();
    }
}
