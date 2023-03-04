/*
** EPITECH PROJECT, 2023
** define_header
** File description:
** define_header
*/

#ifndef DEFINE_HEADER_
    #define DEFINE_HEADER_

    #define MAX_X s_map->max_x
    #define MAX_Y s_map->max_y
    #define INT_CURR_POS s_map->maze_int[pos_x][pos_y]
    #define BEG s_map->maze_int[0][0]
    #define END s_map->maze_int[MAX_X - 1][MAX_Y - 1]

#endif /* !DEFINE_HEADER_ */
