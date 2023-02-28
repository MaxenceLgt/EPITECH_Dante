/*
** EPITECH PROJECT, 2023
** open_file
** File description:
** open_file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char *open_file(char *file)
{
    int fd = open(file, O_RDONLY);
    struct stat stats;
    char *buffer = NULL;

    stat(file, &stats);
    buffer = malloc(sizeof(char) * (stats.st_size + 1));
    read(fd, buffer, stats.st_size);
    buffer[stats.st_size] = '\0';
    close(fd);
    return (buffer);
}
