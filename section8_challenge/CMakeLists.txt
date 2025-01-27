cmake_minimum_required(VERSION 3.29)
project(section8_challenge)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest CONFIG REQUIRED)

add_executable(section8_challenge #src/main.cpp
        #        src/exercise_7.cpp
#        src/exercise_8.cpp
        src/exercise_9/exercise_9.cpp
        src/exercise_9/exercise_9.h
        src/TestExercises.cpp
)

target_link_libraries(section8_challenge PRIVATE GTest::gtest_main)
