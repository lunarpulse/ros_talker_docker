#include "talker.hpp"

Talker::Talker() {
  // Create message to send
  this->msg.data = "Hello Docker-ROS container!";

  // Create ROS publisher timer
  this->publishTimer = n.createTimer(ros::Duration(1), &Talker::publishTimerCallback, this);
  // Create ROS publisher
  this->messagePublisher = n.advertise<std_msgs::String>("message", 1);
}

void Talker::publishTimerCallback(const ros::TimerEvent& event) {
  ROS_INFO("Publishing message");
  this->messagePublisher.publish(msg);
}
