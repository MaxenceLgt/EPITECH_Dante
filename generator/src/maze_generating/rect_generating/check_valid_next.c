/*
** EPITECH PROJECT, 2023
** check_valid_next
** File description:
** check_valid_next
*/

#include <stdbool.h>
#include "gen_define_head.h"
#include "gen_link_list_ways.h"
#include "gen_struct_maze.h"

bool check_valid_next(m_maze *maze, int *x, int *y)
{
    if ((*y) - 2 >= 0 && NEXT_YM == 'X')
        return (true);
    if ((*y) + 2 < maze->y && NEXT_YP == 'X')
        return (true);
    if ((*x) - 2 >= 0 && NEXT_XM == 'X')
        return (true);
    if ((*x) + 2 < maze->x && NEXT_XP == 'X')
        return (true);
    return (false);
}
