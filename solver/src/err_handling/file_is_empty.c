/*
** EPITECH PROJECT, 2023
** file_is_empty
** File description:
** file_is_empty
*/

#include <stdlib.h>
#include <string.h>
#include "file_manage_head.h"

int file_is_empty(char *file)
{
    char *buffer = open_file(file);

    if (strcmp(buffer, "\0") == 0){
        free(buffer);
        return (1);
    }
    free(buffer);
    return (0);
}
