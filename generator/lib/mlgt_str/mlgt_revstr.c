/*
** EPITECH PROJECT, 2022
** mlgt_revstr
** File description:
** mlgt_revstr
*/

#include "mlgt_str_head.h"

void mlgt_revstr(char **str)
{
    int max = mlgt_strlen((*str)) - 1;
    char tmp;

    for (int i = 0; i < max; i++, max--) {
        tmp = (*str)[i];
        (*str)[i] = (*str)[max];
        (*str)[max] = tmp;
    }
}
