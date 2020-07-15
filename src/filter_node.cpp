//
// Created by adam on 18-9-21.
//

#include "filter_core.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "lidar_ground_filter");

    ros::NodeHandle nh;

    RayGroundFilter core(nh);
    // core.Spin();
    return 0;
}