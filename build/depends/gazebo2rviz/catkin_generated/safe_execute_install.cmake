execute_process(COMMAND "/home/xu/Desktop/github_ws/build/depends/gazebo2rviz/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/xu/Desktop/github_ws/build/depends/gazebo2rviz/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
