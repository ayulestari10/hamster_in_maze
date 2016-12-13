#ifndef HAMSTER_DALAM_MAZE_H_INCLUDED
#define HAMSTER_DALAM_MAZE_H_INCLUDED
#define SIZE 6

typedef struct _hamster{
    char maze[SIZE][SIZE];
    char arah;
} Hamster;

typedef struct _maze{
    char M[SIZE][SIZE];
} Maze;

void buat_maze();



#endif // HAMSTER_DALAM_MAZE_H_INCLUDED

