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
    for (int i = 0; i < maze->y; i++)
        printf("%s\n", maze->maze[i]);
    printf("\n");
    usleep(40000);
}
