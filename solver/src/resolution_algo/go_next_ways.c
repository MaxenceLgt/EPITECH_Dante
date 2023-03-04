/*
** EPITECH PROJECT, 2023
** go_next_ways
** File description:
** go_next_ways
*/

#include "define_header.h"
#include "exec_solver_head.h"


int go_left(m_map *s_map, int pos_x, int pos_y)
{
    if (pos_y - 1 >= 0) {
        if (INT_CURR_POS - s_map->maze_int[pos_x][pos_y - 1] == 1){
            display_solution(s_map, pos_x, pos_y - 1);
            return (1);
        }
    }
    return (0);
}

int go_right(m_map *s_map, int pos_x, int pos_y)
{
    if (pos_y + 1 < s_map->max_y){
        if (INT_CURR_POS - s_map->maze_int[pos_x][pos_y + 1] == 1) {
            display_solution(s_map, pos_x, pos_y + 1);
            return (1);
        }
    }
    return (0);
}

int go_top(m_map *s_map, int pos_x, int pos_y)
{
    if (pos_x - 1 >= 0){
        if (INT_CURR_POS - s_map->maze_int[pos_x - 1][pos_y] == 1){
            display_solution(s_map, pos_x - 1, pos_y);
            return (1);
        }
    }
    return (0);
}

int go_bottom(m_map *s_map, int pos_x, int pos_y)
{
    if (pos_x + 1 < s_map->max_x) {
        if (INT_CURR_POS - s_map->maze_int[pos_x + 1][pos_y] == 1){
            display_solution(s_map, pos_x + 1, pos_y);
            return (1);
        }
    }
    return (0);
}
