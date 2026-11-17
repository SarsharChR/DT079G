cmake_minimum_required(VERSION 4.1)
project(labb2)

set(CMAKE_CXX_STANDARD 17)

add_executable(labb2 main.cpp
        shape.h
        shape.cpp
        rectangle.h
        rectangle.cpp
        circle.h
        circle.cpp
        cylinder.h
        cylinder.cpp
        parallelepiped.h
        parallelepiped.cpp
        rounded_rectangle.h
        rounded_rectangle.cpp)
