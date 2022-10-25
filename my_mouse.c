#include <stdio.h>
#include <stdlib.h>

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

int main(){
    char* line = read_maze_parameters("../maze.txt");
    printf("%s\n", line);
}