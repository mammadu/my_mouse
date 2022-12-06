#include "maze_rep.h"
#include "read_maze.h"
#include <fcntl.h>
#include <unistd.h>

int** init_matrix(char* path_to_file){
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



int** populate_matrix(int** matrix, char* path_to_file){
    char* maze_parameters = read_maze_parameters(path_to_file);
    int maze_height = find_maze_height(maze_parameters);
    int maze_width = find_maze_width(maze_parameters);

    // char* maze_text = calloc(maze_height*maze_width, sizeof(char));
    // int fd = open(path_to_file, O_RDONLY);
    // read(fd, maze_text, maze_height*maze_width);
    // char** maze_row = malloc(maze_height*sizeof(char*));
    // for (int i=0; i < maze_height; ++i)
    // {
    //     maze_row[i] = maze_text + i*maze_width;
    // }

    int fd = open(path_to_file, O_RDONLY);
    FILE *fp = fdopen(fd, "r");
    char character = '\0';
    
    char* firstline = NULL;
    getline(&firstline, 0, fp);
    for (int row = 0; row < maze_height; row++){
        for (int column = 0; column < maze_width; column++){
            read(fd, &character, 1);
            printf("%c", character);
        }
    }
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }
    return matrix;
}