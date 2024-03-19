cmake_minimum_required(VERSION 3.26)

project(opencv_project LANGUAGES CXX)
message("C++ compiler: ${CMAKE_CXX_COMPILER}")

add_executable(${PROJECT_NAME} opencv_app.cpp)
find_package(OpenCV)
target_link_libraries(${PROJECT_NAME}  opencv::opencv)