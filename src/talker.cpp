#include "talker.hpp"

Talker::Talker() {
  // Create node handler
  this->n(~);

  // Create message to send
  this->msg = "Hello Docker-ROS container!";

  // Create ROS publisher timer
  this->publishTimer = n.createTimer(ros::Duration(1), publishTimerCallback);
  // Create ROS publisher
  this->messagePublisher = n.advertise<std_msgs::String>("message", 1);
}

void Talker::publishTimerCallback(const ros::TimerEvent& event) {
  this->messagePublisher.publish(msg);
}
