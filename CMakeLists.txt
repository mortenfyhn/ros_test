cmake_minimum_required(VERSION 3.5)
project(ros_test)

find_package(catkin REQUIRED COMPONENTS rospy)

catkin_package()

install(PROGRAMS scripts/node.py DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
