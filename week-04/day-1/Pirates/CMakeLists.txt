cmake_minimum_required(VERSION 3.13)
project(Pirates)

set(CMAKE_CXX_STANDARD 14)

add_executable(Pirates main.cpp pirates.h pirates.cpp ship.h ship.cpp)