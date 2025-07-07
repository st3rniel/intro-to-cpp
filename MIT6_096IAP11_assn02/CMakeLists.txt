cmake_minimum_required(VERSION 3.30)
project(MIT6_096IAP11_assn02)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

find_package(GTest CONFIG REQUIRED)

add_executable(MIT6_096IAP11_assn02 src/TestFunctions.cpp)

target_link_libraries(MIT6_096IAP11_assn02 PRIVATE GTest::gtest_main)
