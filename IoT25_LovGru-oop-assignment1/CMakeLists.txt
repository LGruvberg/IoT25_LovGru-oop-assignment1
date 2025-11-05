cmake_minimum_required(VERSION 4.0)
project(IoT25_LovGru_oop_assignment1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(IoT25_LovGru_oop_assignment1
        main.cpp
        Sensor.cpp
        Sensor.hpp
)
