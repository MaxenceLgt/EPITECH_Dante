/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include <string.h>
#include <stdlib.h>
#include "main_call_head.h"
#include "file_manage_head.h"

int main(int ac, char **av)
{
    char *buffer = NULL;
    char **maze_map = NULL;
    int max_r = 0;
    int max_l = 0;

    if (err_handling(ac, av) == 84)
        return (84);
    buffer = open_file(av[1]);
    maze_map = convert_str_to_arr(buffer);
    for (; maze_map[max_l] != NULL; max_l++);
    max_r = strlen(maze_map[0]);
    exec_resolution(maze_map, max_l - 1, max_r - 1);
    return (0);
}
