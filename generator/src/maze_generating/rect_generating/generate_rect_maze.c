/*
** EPITECH PROJECT, 2023
** generate_rect_maze
** File description:
** generate_rect_maze
*/

#include <stdio.h>
#include <stdlib.h>
#include "gen_rect_gen_head.h"

int generate_rect_maze(int ac, char **av)
{
    m_maze *maze = create_struct_maze(ac, av);

    for (int i = 0; maze->maze[i] != NULL; i++)
        printf("%s\n", maze->maze[i]);
    return (0);
}
