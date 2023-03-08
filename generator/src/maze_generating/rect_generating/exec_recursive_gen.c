/*
** EPITECH PROJECT, 2023
** exec_recursive_gen
** File description:
** exec_recursive_gen
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "gen_define_head.h"
#include "gen_link_list_head.h"
#include "gen_rect_gen_head.h"

int exec_recursive_gen(m_list **list, m_maze *maze)
{
    int x = (*list)->x;
    int y = (*list)->y;

    maze->maze[x][y] = '*';
    while (check_valid_next(maze, &x, &y) == true){
        go_rpos(maze, &x, &y);
        display_map(maze);
    }
    return (0);
}
