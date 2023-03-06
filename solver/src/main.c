/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include <string.h>
#include <stdlib.h>
#include "main_call_head.h"

int main(int ac, char **av)
{
    m_map *s_map = malloc(sizeof(m_map));

    if (err_handling(ac, av) == 84)
        return (84);
    create_map_struct(s_map, av[1]);
    if (s_map->max_x > 3000 && s_map->max_y > 3000)
        increase_stack();
    exec_resolution(s_map);
    return (0);
}
