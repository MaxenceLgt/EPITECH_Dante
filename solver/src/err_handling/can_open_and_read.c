/*
** EPITECH PROJECT, 2023
** can_open_and_read
** File description:
** can_open_and_read
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int can_open_and_read(char *file)
{
    int fd = open(file, O_RDONLY);
    struct stat stats;
    char *buffer;

    if (fd == -1 || stat(file, &stats) == -1)
        return (84);
    buffer = malloc(sizeof(char) * (stats.st_size + 1));
    if (read(fd, buffer, stats.st_size) == -1){
        free(buffer); close(fd);
        return (84);
    }
    close(fd); free(buffer);
    return (0);
}
