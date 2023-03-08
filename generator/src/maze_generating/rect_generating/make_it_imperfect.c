/*
** EPITECH PROJECT, 2023
** make_it_imperfect
** File description:
** make_it_imperfect
*/

#include <stdlib.h>
#include "gen_struct_maze.h"

static void chose_to_break_wall(m_maze *maze, int x, int y)
{
    int choice = (rand() % 4) + 1;

    if (choice == 2)
        maze->maze[y][x] = '*';
}

static void exec_destroy_wall(m_maze *maze, int x, int y)
{
    if (x - 1 < 0 || x > maze->x - 1 || y - 1 < 0 ||
    y >= maze->y - 1)
        return;
    if (maze->maze[y][x] == 'X' && (maze->maze[y][x - 1] == 'X'
    && maze->maze[y][x + 1] == 'X')) {
        chose_to_break_wall(maze, x, y);
    } else if (maze->maze[y][x] == 'X' && (maze->maze[y - 1][x] == 'X'
    && maze->maze[y + 1][x] == 'X')) {
        chose_to_break_wall(maze, x, y);
    }
}

void make_it_imperfect(m_maze *maze)
{
    for (int y = 0; y < maze->y; y++){
        for (int x = 0; x < maze->x; x++)
            exec_destroy_wall(maze, x, y);
    }
}
