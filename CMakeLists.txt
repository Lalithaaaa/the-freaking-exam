cmake_minimum_required(VERSION 4.0)
project(the_freaking_exam)

set(CMAKE_CXX_STANDARD 20)

add_executable(the_freaking_exam main.cpp
        integerDoubler.cpp
        wordHistogram.hpp
        wordHistogram.cpp)
