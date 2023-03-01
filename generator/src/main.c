/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "main_call_head.h"

int main(int ac, char **av)
{
    if (err_handling(ac - 1, &av[1]) == 84)
        return (84);
    return (0);
}
