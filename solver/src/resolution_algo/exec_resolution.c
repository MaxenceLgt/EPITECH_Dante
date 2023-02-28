/*
** EPITECH PROJECT, 2023
** exec_resolution
** File description:
** exec_resolutio,
*/

#include <string.h>
#include <stdio.h>

int exec_resolution(char **maze, int max_l, int max_r)
{
    if (maze[0][0] == 'X' || maze[max_l][max_r] == 'X')
        printf("no solution found\n");
    return (0);
}
