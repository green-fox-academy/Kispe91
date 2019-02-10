cmake_minimum_required(VERSION 3.13)
project(Devices)

set(CMAKE_CXX_STANDARD 14)

add_executable(Devices main.cpp scanner.h scanner.cpp printer.h printer.cpp printer2d.h printer2d.cpp printer3d.h
        printer3d.cpp copier.h copier.cpp)