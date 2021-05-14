cmake_minimum_required(VERSION 3.19)
project(unbounded_queue_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(unbounded_queue_list
        queue_test.cpp
        unbounded_queue.cpp
        unbounded_queue.h)
