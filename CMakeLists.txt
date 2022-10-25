cmake_minimum_required(VERSION 3.24.2)

if (MSVC OR MSYS OR MINGW OR WIN32)
    set(CMAKE_C_COMPILER "c:/mingw/bin/../libexec/gcc/mingw32/6.3.0/lto-wrapper.exe")
endif ()

if (UNIX)
    set(CMAKE_C_COMPILER "/usr/bin/gcc")
endif(UNIX)

project(my_mouse)

add_executable(${PROJECT_NAME} my_mouse.c)