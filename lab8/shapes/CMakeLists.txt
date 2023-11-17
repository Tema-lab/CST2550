cmake_minimum_required(VERSION 3.26)
project(shapes)

set(CMAKE_CXX_STANDARD 20)

add_executable(shapes main.cpp
        Shape.cpp
        Shape.h)
