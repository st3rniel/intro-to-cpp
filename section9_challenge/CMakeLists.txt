cmake_minimum_required(VERSION 3.29)
project(section9_challenge)

set(CMAKE_CXX_STANDARD 20)

find_package(GTest CONFIG REQUIRED)

add_executable(section9_challenge #src/main.cpp
#        src/exercise_10.cpp
#        src/exercise_11.cpp
        src/exercise_12/exercise_12.cpp
        src/exercise_12/exercise_12.h
        src/exercise_13/exercise_13.h
        src/exercise_13/exercise_13.cpp
        src/exercise_14/exercise_14.cpp
        src/exercise_14/exercise_14.h
        src/TestExercises.cpp
)

target_link_libraries(section9_challenge PRIVATE GTest::gtest_main)
