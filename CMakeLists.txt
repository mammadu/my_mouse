cmake_minimum_required(VERSION 3.24.2)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ..)

project(my_mouse)

add_executable(${PROJECT_NAME} my_mouse.c)