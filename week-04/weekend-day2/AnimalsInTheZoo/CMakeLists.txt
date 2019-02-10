cmake_minimum_required(VERSION 3.13)
project(AnimalsInTheZoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(AnimalsInTheZoo main.cpp animal.h animal.cpp reptile.h reptile.cpp mammal.h mammal.cpp bird.h bird.cpp)