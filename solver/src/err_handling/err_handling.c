/*
** EPITECH PROJECT, 2023
** err_handling
** File description:
** err_handling
*/

#include "err_handling_head.h"

int err_handling(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (!can_open_and_read(av[1]))
        return (84);
    if (file_is_empty(av[1]))
        return (84);
    if (!same_lines_size(av[1]))
        return (84);
    return (0);
}
