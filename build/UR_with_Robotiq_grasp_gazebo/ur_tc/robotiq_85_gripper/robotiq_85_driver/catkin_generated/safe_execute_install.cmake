execute_process(COMMAND "/home/xu/Desktop/github_ws/build/UR_with_Robotiq_grasp_gazebo/ur_tc/robotiq_85_gripper/robotiq_85_driver/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/xu/Desktop/github_ws/build/UR_with_Robotiq_grasp_gazebo/ur_tc/robotiq_85_gripper/robotiq_85_driver/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
