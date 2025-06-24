cmake_minimum_required(VERSION 3.30)
project(more_programs_iii)

set(CMAKE_CXX_STANDARD 20)

add_executable(more_programs_iii src/main.cpp
#        src/scope/scope.cpp
#        src/scope/scope.h
#        src/scope_ii/scope__ii.cpp
#        src/scope_ii/scope_ii.h
        src/basic_statistics/statistics.cpp
        src/basic_statistics/statistics.h
        src/primes/first_n_primes.cpp
        src/primes/first_n_primes.h)
