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
    char *buffer = NULL;

    if (err_handling(ac, av) == 84)
        return (84);
    create_map_struct(s_map, av[1]);
    exec_resolution(s_map);
    return (0);
}
