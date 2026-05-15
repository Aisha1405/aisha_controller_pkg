cmake_minimum_required(VERSION 3.8)
project(test_pkg)

if(BUILD_TESTING)
  find_package(ament_cmake REQUIRED)
  find_package(ament_cmake_gtest REQUIRED)
  ament_add_gtest(test_basic test/test.cpp)
endif()

ament_package()
