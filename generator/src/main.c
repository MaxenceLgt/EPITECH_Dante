/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "gen_main_call_head.h"

int main(int ac, char **av)
{
    srand(time(NULL));
    if (err_handling(ac - 1, &av[1]) == 84)
        return (84);
    if (strcmp("1", av[1]) == 0 || strcmp("1", av[2]) == 0)
        return (generate_maze_line(atoi(av[1]), atoi(av[2])));
    generate_rect_maze(ac - 1, &av[1]);
    return (0);
}
