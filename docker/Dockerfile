FROM ros:melodic-ros-base

RUN apt-get update -y
RUN apt-get upgrade -y
RUN mkdir -p /catkin_ws/src/

RUN /bin/bash -c '. /opt/ros/$ROS_DISTRO/setup.bash; cd /catkin_ws/; catkin_make; . /catkin_ws/devel/setup.bash'

WORKDIR /catkin_ws/src/
RUN git clone https://github.com/lunarpulse/ros_talker_docker.git

WORKDIR /catkin_ws/
RUN /bin/bash -c '. /opt/ros/$ROS_DISTRO/setup.bash; cd /catkin_ws/; catkin_make -DCATKIN_WHITELIST_PACKAGES=talker'
RUN /bin/bash -c '. devel/setup.bash'
RUN mkdir -p /catkin_ws/rosbags/

COPY ros_entrypoint.sh /
RUN chmod +x /ros_entrypoint.sh
CMD ["rosrun", "talker", "talker_node"]
