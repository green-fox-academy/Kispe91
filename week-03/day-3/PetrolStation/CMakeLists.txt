cmake_minimum_required(VERSION 3.13)
project(PetrolStation)

set(CMAKE_CXX_STANDARD 14)

add_executable(PetrolStation main.cpp station.cpp car.cpp station.h car.h)