/*
** EPITECH PROJECT, 2023
** create_map_struct
** File description:
** create_map_struct
*/

#include <string.h>
#include <stdlib.h>
#include "map_struct.h"
#include "file_manage_head.h"

void create_map_struct(m_map *s_map, char *file)
{
    char *buffer = open_file(file);
    s_map->maze_map = convert_str_to_arr(buffer);
    for (s_map->max_x = 0; s_map->maze_map[s_map->max_x] != NULL;
    s_map->max_x++);
    s_map->max_y = strlen(s_map->maze_map[0]);
    s_map->maze_int = convert_map_to_int(s_map);
}
