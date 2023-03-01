/*
** EPITECH PROJECT, 2022
** mlgt_strcat
** File description:
** mlgt_strcat
*/

#include "mlgt_str_head.h"

void mlgt_strcat(char **dest, char *src)
{
    int i = 0;
    int dest_max = mlgt_strlen((*dest));

    for (;i != mlgt_strlen(src); i++)
        (*dest)[dest_max + i] = src[i];
    (*dest)[dest_max + i] = '\0';
}
