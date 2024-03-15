cmake_minimum_required(VERSION 3.26)

project(rana LANGUAGES CXX)
message("C++ compiler: ${CMAKE_CXX_COMPILER}")

add_executable(opencv_app opencv_app.cpp)