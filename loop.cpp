
#include <sys/resource.h>

#include <ros/ros.h>

int main(int argc, char ** argv) {

  struct rlimit file_limit = { .rlim_cur = 12, .rlim_max = 16 };
  setrlimit(RLIMIT_NOFILE, &file_limit);

  ros::init(argc, argv, "loop");

  ros::spin();

  return 0;
}
