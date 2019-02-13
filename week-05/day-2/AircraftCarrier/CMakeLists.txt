cmake_minimum_required(VERSION 3.13)
project(AircraftCarrier)

set(CMAKE_CXX_STANDARD 14)

add_executable(AircraftCarrier main.cpp aircraft.h aircraft.cpp f16.h f16.cpp f35.h f35.cpp carrier.cpp carrier.h)