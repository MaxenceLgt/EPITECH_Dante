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
    maze->maze[(*list)->y][(*list)->x] = '*';
    while (check_valid_next(list, maze) == true){
        go_rpos(list, maze);
    }
    return (0);
}
