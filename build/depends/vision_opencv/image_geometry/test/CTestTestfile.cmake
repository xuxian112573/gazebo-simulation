# CMake generated Testfile for 
# Source directory: /home/xu/Desktop/github_ws/src/depends/vision_opencv/image_geometry/test
# Build directory: /home/xu/Desktop/github_ws/build/depends/vision_opencv/image_geometry/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_image_geometry_nosetests_directed.py "/home/xu/Desktop/github_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/xu/Desktop/github_ws/build/test_results/image_geometry/nosetests-directed.py.xml" "--return-code" "\"/usr/local/bin/cmake\" -E make_directory /home/xu/Desktop/github_ws/build/test_results/image_geometry" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/xu/Desktop/github_ws/src/depends/vision_opencv/image_geometry/test/directed.py --with-xunit --xunit-file=/home/xu/Desktop/github_ws/build/test_results/image_geometry/nosetests-directed.py.xml")
add_test(_ctest_image_geometry_gtest_image_geometry-utest "/home/xu/Desktop/github_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/xu/Desktop/github_ws/build/test_results/image_geometry/gtest-image_geometry-utest.xml" "--return-code" "/home/xu/Desktop/github_ws/devel/lib/image_geometry/image_geometry-utest --gtest_output=xml:/home/xu/Desktop/github_ws/build/test_results/image_geometry/gtest-image_geometry-utest.xml")
