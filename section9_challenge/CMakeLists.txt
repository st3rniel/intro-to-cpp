cmake_minimum_required(VERSION 3.29)
project(section9_challenge)

set(CMAKE_CXX_STANDARD 20)

find_package(GTest CONFIG REQUIRED)

add_executable(section9_challenge # src/main.cpp
#        src/do_while_sample.cpp
#        src/exercise_10.cpp
#        src/exercise_11.cpp
        src/exercise_12/exercise_12.cpp
        src/exercise_12/exercise_12.h
        src/exercise_13/exercise_13.h
        src/exercise_13/exercise_13.cpp
        src/exercise_14/exercise_14.cpp
        src/exercise_14/exercise_14.h
        src/TestExercises.cpp
        src/exercise_15/exercise_15.cpp
        src/exercise_15/exercise_15.h
        src/exercise_16/exercise_16.cpp
        src/exercise_16/exercise_16.h
        src/exercise_17/exercise_17.cpp
        src/exercise_17/exercise_17.h
)

target_link_libraries(section9_challenge PRIVATE GTest::gtest_main)
