/*
** EPITECH PROJECT, 2023
** generate_rect_maze
** File description:
** generate_rect_maze
*/

#include <stdio.h>
#include <stdlib.h>
#include "gen_rect_gen_head.h"
#include "gen_link_list_head.h"

int generate_rect_maze(int ac, char **av)
{
    m_maze *maze = create_struct_maze(ac, av);
    m_list *pos = NULL;

    init_linked_list(0, 0, &pos);
    return (0);
}
