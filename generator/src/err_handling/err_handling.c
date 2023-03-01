/*
** EPITECH PROJECT, 2023
** err_handling
** File description:
** err_handling
*/

#include <string.h>
#include "err_handling_head.h"

int err_handling(int ac, char **av)
{
    if (ac != 2 && ac != 3)
        return (84);
    if (!is_number(av[0]) || !is_number(av[1]))
        return (84);
    if (ac == 3){
        if (strcmp(av[2], "perfect") != 0)
            return (84);
    }
    return (0);
}
