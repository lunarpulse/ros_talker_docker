#ifndef TALKER_HPP
#define TALKER_HPP

#include <ros/ros.h>
#include "std_msgs/String.h"

class Talker {
public:
  // Constructor
  Talker();

private:
  // Node handler
  ros::NodeHandle n;

  // ROS publisher
  ros::Timer publishTimer;
  // ROS timer
  ros::Publisher messagePublisher;
  // Message to send
  std_msgs::String msg;

  // Publish timer callback
  void publishTimerCallback(const ros::TimerEvent& event);
};

#endif TALKER_HPP
