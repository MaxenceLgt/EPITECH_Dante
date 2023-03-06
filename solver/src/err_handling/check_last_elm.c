/*
** EPITECH PROJECT, 2023
** check_last_elm
** File description:
** check_last_elm
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "file_manage_head.h"

int check_last_elm(char *file)
{
    struct stat stats;
    char *buffer = open_file(file);

    stat(file, &stats);
    if (buffer[stats.st_size - 1] != '\n')
        return (0);
    return (1);
}
