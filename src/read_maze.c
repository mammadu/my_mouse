#include "read_maze.h" 

char* read_maze_parameters(char *path_to_file) {
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    fp = fopen(path_to_file, "r");
    if (fp == NULL)
        exit(1);
    getline(&line, &len, fp);
    return line;
}

int find_maze_height(char* maze_parameters){
    int i = 0;
    int height_str_len = strlen(maze_parameters);
    char* height_str = malloc(sizeof(char) * height_str_len);
    while (maze_parameters[i] != 'x'){
        height_str[i] = maze_parameters[i];
        i++;
    }
    height_str[i] = '\0';
    int height = atoi(height_str);
    free(height_str);
    return height;
}

int find_maze_width(char* maze_parameters){
    int i = 0;
    while (isdigit(maze_parameters[i])) i++;
    i++;
    int width_str_len = strlen(maze_parameters);
    char* width_str = malloc(sizeof(char) * width_str_len);
    int j = 0;
    while (isdigit(maze_parameters[i])){
        width_str[j] = maze_parameters[i];
        i++;
        j++;
    }
    width_str[i] = '\0';
    int width = atoi(width_str);
    free(width_str);
    return width;   
}

// find_maze_symbols will retrieve the symbol of interest queried by the enum Positions
char find_maze_symbols(char* maze_parameters, int symbol_of_interst){
    int i = 0;
    while (maze_parameters[i] != ' ') i++;
    return maze_parameters[i+= symbol_of_interst];
}

