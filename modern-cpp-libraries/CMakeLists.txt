cmake_minimum_required(VERSION 3.10)
project(modern_cpp_libraries)

set(CMAKE_CXX_STANDARD 17)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
add_executable(modern_cpp_libraries main.cpp Precompiled.h)