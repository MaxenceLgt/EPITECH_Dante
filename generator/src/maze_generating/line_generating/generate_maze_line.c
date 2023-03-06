/*
** EPITECH PROJECT, 2023
** generate_maze_line
** File description:
** generate_maze_line
*/

#include <stdio.h>

int generate_maze_line(int x, int y)
{
    if (y == 1){
        for (int i = 0; i < x; i++){
            printf("*");
        }
    }
    return (0);
}
