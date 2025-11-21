# 🐢 turtlesim_cpp

**turtlesim_cpp** is a simple ROS1 C++ package for learning how to control and interact with the `turtlesim` simulator. It includes example nodes demonstrating publishers, subscribers, and basic turtle movement.

---

## Features
- Example ROS C++ nodes
- Publisher, subscriber, and service usage
- Compatible with ROS1 Melodic (Ubuntu 18.04) and Noetic (Ubuntu 20.04)
- Easy to extend for learning or projects

---

## Installation
1. Clone the repository into your catkin workspace:

```bash
cd ~/catkin_ws/src
git clone https://github.com/loithanhquan-ltq/turtlesim_cpp.git

2. Build your workspace:
cd ~/catkin_ws
catkin_make
source devel/setup.bash

3. Install turtlesim if needed:

sudo apt install ros-$ROS_DISTRO-turtlesim

$ROS_DISTRO = noetic

Usage

1. Start the turtlesim simulator:

rosrun turtlesim turtlesim_node

2. Run a node

rosrun turtlesim turtlesim_cpp

