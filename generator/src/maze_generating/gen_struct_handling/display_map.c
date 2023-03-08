/*
** EPITECH PROJECT, 2023
** display_map
** File description:
** display_map
*/

#include <unistd.h>
#include <stdio.h>
#include "gen_struct_maze.h"

void display_map(m_maze *maze)
{
    int i = 0;

    for (; i < maze->y - 1; i++)
        printf("%s\n", maze->maze[i]);
    printf("%s", maze->maze[i]);
}
