#ifndef read_maze_H
#define read_maze_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum Positions {ZERO, OBSTACLE, EMPTY_SPC, PATH, START, END};

char* read_maze_parameters(char *path_to_file);

int find_maze_height(char* maze_parameters);

int find_maze_width(char* maze_parameters);

char find_maze_symbols(char* maze_parameters, int symbol_of_interest);

#endif