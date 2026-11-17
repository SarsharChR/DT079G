cmake_minimum_required(VERSION 4.1)
project(labb4)

set(CMAKE_CXX_STANDARD 20)

add_executable(labb4 main.cpp
        Email.h
        Email.cpp
        mailbox.h
        mailbox.cpp)
