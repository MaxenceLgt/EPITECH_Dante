/*
** EPITECH PROJECT, 2023
** more_than_one_way.c
** File description:
** more_than_one_way
*/

#include <unistd.h>
#include <stdbool.h>
#include "gen_define_head.h"
#include "gen_struct_maze.h"

bool more_than_one_way(m_maze *maze, int *x, int *y)
{
    size_t count = 0;

    if ((*y) - 2 >= 0 && NEXT_YM == 'X')
        count++;
    if ((*y) + 2 < maze->y && NEXT_YP == 'X')
        count++;
    if ((*x) - 2 >= 0 && NEXT_XM == 'X')
        count++;
    if ((*x) + 2 < maze->x && NEXT_XP == 'X')
        count++;
    if (count > 1)
        return (true);
    return (false);
}
