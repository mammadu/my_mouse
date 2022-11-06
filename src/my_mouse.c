#include "read_maze.h"

int main(){
    char* maze_parameters = read_maze_parameters("./maze.txt");
    int maze_width = find_maze_width(maze_parameters);
    printf("%d\n", maze_width);
    //proof of concept
    printf("%c\n", find_maze_symbols(maze_parameters, OBSTACLE));
    // free(maze_parameters);
}