cmake_minimum_required(VERSION 3.30)
project(MIT6_096IAP11_assn01)

set(CMAKE_CXX_STANDARD 20)

add_executable(MIT6_096IAP11_assn01 src/main.cpp
#        src/scope/scope.cpp
#        src/scope/scope.h
#        src/scope_ii/scope__ii.cpp
#        src/scope_ii/scope_ii.h
        src/basic_statistics/statistics.cpp
        src/basic_statistics/statistics.h
        src/primes/first_n_primes.cpp
        src/primes/first_n_primes.h
        src/infinite_ternary/infinite_ternary.cpp
        src/infinite_ternary/infinite_ternary.h)
