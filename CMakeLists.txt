cmake_minimum_required(VERSION 3.5)
project(rospy_test)

find_package(catkin REQUIRED COMPONENTS rospy)

catkin_package()

install(PROGRAMS scripts/node.py DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
