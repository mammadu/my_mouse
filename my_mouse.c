#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* read_maze_parameters(char *path_to_file) {
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    fp = fopen(path_to_file, "r");
    if (fp == NULL)
        exit(1);
    read = getline(&line, &len, fp);
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

int main(){
    char* maze_parameters = read_maze_parameters("../maze.txt");
    int maze_width = find_maze_width(maze_parameters);
    printf("%d\n", maze_width);
}