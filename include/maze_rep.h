#ifndef maze_rep_H
#define maze_rep_H

#define OBSTACLE_VAL -1
#define EMPTY_SPC_VAL 0
#define PATH_VAL 1
#define START_VAL -2147483647
#define END_VAL 2147483647

int** init_matrix(char *path_to_file);

int** populate_matrix(int** matrix, char* path_to_file);

#endif