/*
** EPITECH PROJECT, 2023
** display_map
** File description:
** display_map
*/

#include <string.h>
#include <stdio.h>
#include "map_struct.h"

int display_int_map(m_map *s_map)
{
    for (int x = 0; x < s_map->max_x; x++){
        for (int y = 0; y < s_map->max_y; y++){
            printf("%i\t", s_map->maze_int[x][y]);
        }
        printf("\n");
    }
    return (0);
}

int display_str_map(m_map *s_map)
{
    for (int x = 0; x < s_map->max_x; x++){
        printf("%s\n", s_map->maze_map[x]);
    }
    return (0);
}
