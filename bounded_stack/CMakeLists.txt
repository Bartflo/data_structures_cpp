cmake_minimum_required(VERSION 3.19)
project(bounded_stack)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bounded_stack
        bounded_stack.cpp
        bounded_stack.h
        stack_test.cpp)
