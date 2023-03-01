/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "mlgt_str_head.h"

char *mlgt_strdup(char const *src)
{
    char *str;
    int i = 0;
    str = malloc(sizeof(char) * (mlgt_strlen(src) + 1));
    while (src[i] != '\0'){
        str[i] = src[i];
        i += 1;
    }
    str[i] = '\0';
    return (str);
}

char *mlgt_strndup(char const *src, int size)
{
    char *str;
    int i = 0;

    if (mlgt_strlen(src) <= size)
        return (mlgt_strdup(src));
    str = malloc(sizeof(char) * (size + 1));
    for (; i != size; i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}
