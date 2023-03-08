/*
** EPITECH PROJECT, 2023
** go_random_pos
** File description:
** go_random_pos
*/

#include <stdlib.h>
#include <unistd.h>
#include "gen_define_head.h"
#include "gen_link_list_head.h"
#include "gen_rect_gen_head.h"

static void go_rpos_two(m_maze *maze, int *x, int *y, int my_r)
{
    if (my_r == 3){
        if ((*x) - 2 >= 0 && NEXT_XM == 'X'){
            maze->maze[(*y)][(*x) - 1] = '*';
            NEXT_XM = '*';
            (*x) -= 2;
        }
    }
    if (my_r == 4){
        if ((*x) + 2 < maze->x && NEXT_XP == 'X'){
            maze->maze[(*y)][(*x) + 1] = '*';
            NEXT_XP = '*';
            (*x) += 2;
        }
    }
}

void go_rpos(m_maze *maze, int *x, int *y)
{
    int my_r = rand() % 4;
    my_r += 1;

    if (my_r == 1){
        if ((*y) - 2 >= 0 && NEXT_YM == 'X'){
            maze->maze[(*y) - 1][(*x)] = '*';
            NEXT_YM = '*';
            (*y) -= 2;
        }
    }
    if (my_r == 2){
        if ((*y) + 2 < maze->y && NEXT_YP == 'X'){
            maze->maze[(*y) + 1][(*x)] = '*';
            NEXT_YP = '*';
            (*y) += 2;
        }
    }
    return (go_rpos_two(maze, x, y, my_r));
}
