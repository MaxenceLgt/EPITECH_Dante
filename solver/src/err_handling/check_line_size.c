/*
** EPITECH PROJECT, 2023
** check_line_size
** File description:
** check_line_size.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int line_is_last(char *line)
{
    if (line[strlen(line) - 1] == '\n')
        return (0);
    return (1);
}

static int valid_curr_line(char *line, size_t sline)
{
    if (line_is_last(line)){
        if (sline == strlen(line)){
            return (1);
        }
    } else {
        if (sline == strlen(line) - 1){
            return (1);
        }
    }
    return (0);
}

int check_line_size(char *file)
{
    FILE *fd = fopen(file, "r");
    char *temp = NULL;
    size_t n = 0;
    size_t size_line = 0;

    getline(&temp, &n, fd);
    if (line_is_last(temp))
        size_line = strlen(temp);
    else
        size_line = strlen(temp) - 1;
    while (getline(&temp, &n, fd) != -1) {
        if (!valid_curr_line(temp, size_line))
            return (0);
    }
    return (1);
}
