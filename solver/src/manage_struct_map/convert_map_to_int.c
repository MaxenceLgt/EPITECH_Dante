/*
** EPITECH PROJECT, 2023
** convert_map_to_int
** File description:
** convert_map_to_int
*/

#include <stdlib.h>
#include "map_struct.h"

static void replace_val(int **int_m, int x, int y, m_map *s_map)
{
    if (s_map->maze_map[x][y] == 'X')
        int_m[x][y] = -1;
    else
        int_m[x][y] = 0;
}

int **convert_map_to_int(m_map *s_map)
{
    int **int_map = malloc(sizeof(int *) * s_map->max_x);

    for (int i = 0; i < s_map->max_x; i++)
        int_map[i] = malloc(sizeof(int) * s_map->max_y);
    for (int x = 0; x < s_map->max_x; x++){
        for (int y = 0; y < s_map->max_y; y++){
            replace_val(int_map, x, y, s_map);
        }
    }
    return (int_map);
}
