cmake_minimum_required(VERSION 3.19)
project(introduction_to_programming)

set(CMAKE_CXX_STANDARD 17)

add_executable(introduction_to_programming
        section-1/section-1.cxx
        tutorial.cxx section-1/section-1.h)
