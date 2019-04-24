#include "talker.hpp"

int main(int argc, char **argv) {
  // Initialize ROS
  ros::init(argc, argv, "talker");

  // Create Talker instance
  Talker * talker = new Talker();

  // Wait for ROS shutdown
  ros::waitForShutdown();

  return 0;
}
