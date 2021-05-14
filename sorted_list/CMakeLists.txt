cmake_minimum_required(VERSION 3.19)
project(sorted_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(sorted_list
        list_test.cpp
        sorted_list.cpp
        sorted_list.h)
