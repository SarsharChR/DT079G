cmake_minimum_required(VERSION 4.1)
project(Labb5)

set(CMAKE_CXX_STANDARD 17)

add_executable(Labb5 main.cpp
        human.cpp
        human.h
        Myprint.cpp
        Myprint.h
        GreaterThan.cpp
        GreaterThan.h
        MYBinOp.h
        MyUnOp.h
        MyFunc.cpp
        MyFunc.h)
