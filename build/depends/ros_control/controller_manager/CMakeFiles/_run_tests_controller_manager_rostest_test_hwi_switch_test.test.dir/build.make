# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xu/Desktop/github_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xu/Desktop/github_ws/build

# Utility rule file for _run_tests_controller_manager_rostest_test_hwi_switch_test.test.

# Include the progress variables for this target.
include depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/progress.make

depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test:
	cd /home/xu/Desktop/github_ws/build/depends/ros_control/controller_manager && ../../../catkin_generated/env_cached.sh /usr/bin/python2 /opt/ros/kinetic/share/catkin/cmake/test/run_tests.py /home/xu/Desktop/github_ws/build/test_results/controller_manager/rostest-test_hwi_switch_test.xml "/opt/ros/kinetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/xu/Desktop/github_ws/src/depends/ros_control/controller_manager --package=controller_manager --results-filename test_hwi_switch_test.xml --results-base-dir \"/home/xu/Desktop/github_ws/build/test_results\" /home/xu/Desktop/github_ws/src/depends/ros_control/controller_manager/test/hwi_switch_test.test "

_run_tests_controller_manager_rostest_test_hwi_switch_test.test: depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test
_run_tests_controller_manager_rostest_test_hwi_switch_test.test: depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/build.make

.PHONY : _run_tests_controller_manager_rostest_test_hwi_switch_test.test

# Rule to build all files generated by this target.
depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/build: _run_tests_controller_manager_rostest_test_hwi_switch_test.test

.PHONY : depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/build

depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/clean:
	cd /home/xu/Desktop/github_ws/build/depends/ros_control/controller_manager && $(CMAKE_COMMAND) -P CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/cmake_clean.cmake
.PHONY : depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/clean

depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/depend:
	cd /home/xu/Desktop/github_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xu/Desktop/github_ws/src /home/xu/Desktop/github_ws/src/depends/ros_control/controller_manager /home/xu/Desktop/github_ws/build /home/xu/Desktop/github_ws/build/depends/ros_control/controller_manager /home/xu/Desktop/github_ws/build/depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : depends/ros_control/controller_manager/CMakeFiles/_run_tests_controller_manager_rostest_test_hwi_switch_test.test.dir/depend

