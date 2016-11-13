cmake_minimum_required(VERSION 3.6)
project(lab4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp lab20.cpp lab20.h macros.h lab19.cpp lab19.h zad18.cpp zad18.h zad17.cpp zad17.h common.h common.cpp)
add_executable(lab4 ${SOURCE_FILES})