/*
** EPITECH PROJECT, 2023
** create_struct_maze
** File description:
** create_struct_maze
*/

#include <stdlib.h>
#include "gen_struct_handling_head.h"

m_maze *create_struct_maze(int ac, char **av)
{
    m_maze *s_maze = malloc(sizeof(m_maze));

    s_maze->x = atoi(av[0]);
    s_maze->y = atoi(av[1]);
    if (ac == 3)
        s_maze->perfect = true;
    s_maze->maze = gen_map_maze(s_maze);
    return (s_maze);
}
