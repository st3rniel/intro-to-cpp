cmake_minimum_required(VERSION 3.30)
project(MIT6_096IAP11_assn01)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED COMPONENTS multiprecision)
find_package(GTest CONFIG REQUIRED)

add_executable(MIT6_096IAP11_assn01 #src/main.cpp
        src/TestFunctions.cpp
#        src/scope/scope.cpp
#        src/scope/scope.h
#        src/scope_ii/scope__ii.cpp
#        src/scope_ii/scope_ii.h
        src/basic_statistics/statistics.cpp
        src/basic_statistics/statistics.h
        src/primes/first_n_primes.cpp
        src/primes/first_n_primes.h
        src/infinite_ternary/infinite_ternary.cpp
        src/infinite_ternary/infinite_ternary.h
        src/factorial/factorial.cpp
        src/factorial/factorial.h
        src/fibonacci/fibonacci.cpp
        src/fibonacci/fibonacci.h
)

target_link_libraries(MIT6_096IAP11_assn01 PRIVATE Boost::multiprecision GTest::gtest_main)
