/*
** EPITECH PROJECT, 2023
** free_struct_elms
** File description:
** free_struct_elms
*/

#include <stdlib.h>
#include <unistd.h>
#include "map_struct.h"

static void free_str_arr(m_map *s_map)
{
    while (*s_map->maze_map){
        free(*s_map->maze_map);
        s_map->maze_map++;
    }
}

static void free_int_arr(m_map *s_map)
{
    for (int i = 0; i < s_map->max_x; i++){
        free(s_map->maze_int[i]);
    }
    free(s_map->maze_int);
}

void free_struct_elms(m_map *s_map)
{
    free_str_arr(s_map);
    free_int_arr(s_map);
    free(s_map);
}
