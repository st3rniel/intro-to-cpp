cmake_minimum_required(VERSION 3.29)
project(section10_challenge)

set(CMAKE_CXX_STANDARD 20)

find_package(GTest CONFIG REQUIRED)

add_executable(section10_challenge
#        src/main.cpp
        src/test_exercises.cpp
        src/exercise_19/exercise_19.cpp
        src/exercise_19/exercise_19.h
        src/exercise_20/exercise_20.cpp
        src/exercise_20/exercise_20.h
        src/exercise_21/exercise_21.cpp
        src/exercise_21/exercise_21.h
)

target_link_libraries(section10_challenge PRIVATE GTest::gtest_main)
