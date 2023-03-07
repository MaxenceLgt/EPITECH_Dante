/*
** EPITECH PROJECT, 2023
** gen_map_maze
** File description:
** gen_map_maze
*/

#include <stdlib.h>
#include <string.h>
#include "gen_struct_maze.h"

static char *generate_line(m_maze *s_maze)
{
    char *line = malloc(sizeof(char) * (s_maze->x + 1));
    int parser = 0;
    for (; parser < s_maze->x; parser ++)
        line[parser] = 'X';
    line[parser] = '\0';
    return (line);
}

char **gen_map_maze(m_maze *s_maze)
{
    char **maze = malloc(sizeof(char *) * (s_maze->y + 1));
    char *line_x = generate_line(s_maze);
    int parser = 0;

    for (;parser < s_maze->y; parser++)
        maze[parser] = strdup(line_x);
    maze[parser] = NULL;
    free(line_x);
    return (maze);
}
