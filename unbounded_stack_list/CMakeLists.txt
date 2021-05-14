cmake_minimum_required(VERSION 3.19)
project(unbounded_stack_list)

set(CMAKE_CXX_STANDARD 14)

#include_directories(.)

add_executable(unbounded_stack_list
        stack_test.cpp
        unbounded_stack.cpp
        unbounded_stack.h)
