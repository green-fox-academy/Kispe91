cmake_minimum_required(VERSION 3.13)
project(Smartphone C)

set(CMAKE_C_STANDARD 99)

add_executable(Smartphone main.c smartphone.h smartphone.c)