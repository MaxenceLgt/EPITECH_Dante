/*
** EPITECH PROJECT, 2023
** modify_if_pair
** File description:
** modify_is_pair
*/

#include "gen_struct_maze.h"

int modify_if_pair(m_maze *maze)
{
    if (maze->y % 2 == 0 && maze->x % 2 == 0) {
        maze->maze[maze->y - 1][maze->x - 1] = '*';
        maze->maze[maze->y - 2][maze->x - 1] = '*';
        return (1);
    }
    if (maze->y % 2 == 0 || maze->x % 2 == 0) {
        maze->maze[maze->y - 1][maze->x - 1] = '*';
        return (1);
    }
    return (0);
}
