/*
** EPITECH PROJECT, 2023
** convert_str_to_arr
** File description:
** convert_str_to_arr
*/

#include <stdlib.h>
#include <string.h>

static int count_malloc(char *buf)
{
    char *temp = strdup(buf);
    char *word = NULL;
    int nb_malloc = 0;

    while ((word = __strtok_r(temp, "\n", &temp)))
        nb_malloc++;
    return (nb_malloc);
}

char **convert_str_to_arr(char *buf)
{
    char *temp = strdup(buf);
    int nb_malloc = count_malloc(buf);
    char **arr_buf = malloc(sizeof(char *) * (nb_malloc + 1));
    int pos = 0;
    char *word = NULL;

    while ((word = __strtok_r(temp, "\n", &temp))){
        arr_buf[pos] = strdup(word);
        pos++;
    }
    arr_buf[pos] = NULL;
    return (arr_buf);
}
