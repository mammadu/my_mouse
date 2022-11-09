#include "maze_rep.h"
#include "read_maze.h"

int** create_matrix(char *path_to_file){
    char* maze_parameters = read_maze_parameters(path_to_file);
    int maze_height = find_maze_height(maze_parameters);
    int maze_width = find_maze_width(maze_parameters);

    int* values = calloc(maze_height*maze_width, sizeof(int));
    int** matrix = malloc(maze_height*sizeof(int*));
    for (int i=0; i < maze_height; ++i)
    {
        matrix[i] = values + i*maze_width;
    }

    return matrix;
}