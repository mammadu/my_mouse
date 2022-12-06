cmake_minimum_required(VERSION 3.24.2)

project(my_mouse)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ..)
set(SOURCE_DIR "./src")
# set(SOURCES ${SOURCE_DIR}/my_mouse.c ${SOURCE_DIR}/read_maze.c )
FILE(GLOB SOURCES ${SOURCE_DIR}/*.c)
set(INCLUDE_DIR "./include/")

# add_compile_options(-Wall -Wextra -g3 -Werror)
add_compile_options(-Wall -Wextra -g3)

add_link_options(-Wall -Wextra -g3 -Werror)
add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})