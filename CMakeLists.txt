cmake_minimum_required(VERSION 3.24.2)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ..)

project(my_mouse)

add_compile_options(-fsanitize=address -Wall -Wextra -g3 -Werror)

add_link_options(-fsanitize=address -Wall -Wextra -g3 -Werror)

add_executable(${PROJECT_NAME} my_mouse.c)