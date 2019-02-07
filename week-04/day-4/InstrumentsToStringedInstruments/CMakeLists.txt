cmake_minimum_required(VERSION 3.13)
project(InstrumentsToStringedInstruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(InstrumentsToStringedInstruments main.cpp instrument.h instrument.cpp stringedinstrument.h
        stringedinstrument.cpp electricguitar.h electricguitar.cpp bassguitar.h bassguitar.cpp violin.h violin.cpp)