# talker

ROS node created for learning purpose based on [ talker roscpp tutorials](https://github.com/ros/ros_tutorials/tree/melodic-devel/roscpp_tutorials/talker). An easy journey to discover ROS + Dockerfile + docker-compose. Talker node publish a std_msgs::String message to ROS system. Containers are organised as follows:

  - roscore: starts roscore.
  - talker: starts talker node using rosrun command.

# Build Docker image

Building Docker image:

```sh
docker build -t ros:talker ..
```

# Launch containers

Launching containers:

```sh
docker run -d --restart always --name talker --net rosnetwork --env ROS_MASTER_URI=http://roscore:11311 --env ROS_HOSTNAME=talker ros:talker
docker run -d --restart always --name roscore --net rosnetwork ros:melodic-ros-base roscore
```

# Using docker-compose

Use docker-compose:
```sh
docker-compose up --build -d
```
