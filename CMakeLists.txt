cmake_minimum_required(VERSION 3.19)
project(introduction-to-programming)

set(CMAKE_CXX_STANDARD 17)

add_executable(introduction-to-programming
        main.cxx
        helper/helper.h
        helper/helper.cxx
        section-1/section-1.h
        section-2/section-2.h
        section-5/section-5.h
        section-6/section-6.h
        section-1/section-1.cxx
        section-2/section-2.cxx
        section-5/section-5.cxx	
        section-6/section-6.cxx
        )
