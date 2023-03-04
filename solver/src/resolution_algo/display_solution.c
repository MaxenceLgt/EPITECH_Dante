/*
** EPITECH PROJECT, 2023
** display_solution
** File description:
** display_solution
*/

#include <stdio.h>
#include "define_header.h"
#include "exec_solver_head.h"

int display_solution(m_map *s_map, int pos_x, int pos_y)
{
    s_map->maze_map[pos_x][pos_y] = 'o';
    if (pos_x == 0 && pos_y == 0)
        return (1);
    if (go_top(s_map, pos_x, pos_y))
        return (0);
    if (go_bottom(s_map, pos_x, pos_y))
        return (0);
    if (go_right(s_map, pos_x, pos_y))
        return (0);
    if (go_left(s_map, pos_x, pos_y))
        return (0);
    return (0);
}
