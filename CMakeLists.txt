cmake_minimum_required(VERSION 3.10)
project(path_cpp_pluralsight)

set(CMAKE_CXX_STANDARD 11)

add_executable(path_cpp_pluralsight main.cpp functions.cpp functions.h Account.cpp Account.h Transaction.cpp Transaction.h)