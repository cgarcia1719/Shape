cmake_minimum_required(VERSION 3.3)
project(Shape)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Shape.cpp Shape.h Circle.cpp Circle.h Shape.cpp Shape.h)
add_executable(Shape ${SOURCE_FILES})