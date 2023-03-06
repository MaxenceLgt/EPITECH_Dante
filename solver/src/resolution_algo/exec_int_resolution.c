/*
** EPITECH PROJECT, 2023
** exec_int_resolution
** File description:
** exec_int_resolutions
*/

#include "define_header.h"
#include "map_struct.h"
#include "exec_solver_head.h"

static int apply_recursive(m_map *s_map, int pos_x, int pos_y, int val)
{
    if (pos_x < 0)
        exec_int_resolution(s_map, pos_x - 1, pos_y, val + 1);
    if (pos_x < MAX_X)
        exec_int_resolution(s_map, pos_x + 1, pos_y, val + 1);
    if (pos_y < MAX_Y)
        exec_int_resolution(s_map, pos_x, pos_y + 1, val + 1);
    if (pos_y > 0)
        exec_int_resolution(s_map, pos_x, pos_y - 1, val + 1);
    return (0);
}

int exec_int_resolution(m_map *s_map, int pos_x, int pos_y, int val)
{
    if (pos_x < 0 || pos_y < 0 || pos_x >= s_map->max_x
    || pos_y >= s_map->max_y)
        return 1;
    if (INT_CURR_POS == -1)
        return 0;
    if (INT_CURR_POS > 0){
        if (INT_CURR_POS > val)
            INT_CURR_POS = val;
        else
            return 0;
    } else {
        INT_CURR_POS = val;
    }
    apply_recursive(s_map, pos_x, pos_y, val);
    return (0);
}
