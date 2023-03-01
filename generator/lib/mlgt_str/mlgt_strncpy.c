/*
** EPITECH PROJECT, 2022
** mlgt_strncpy
** File description:
** mlgt_strncpy
*/

#include "mlgt_str_head.h"

void mlgt_strncpy(char **dest ,char *src, int n)
{
    int count = 0;

    if (mlgt_strlen(src) <= n){
        mlgt_strcpy(dest, src);
    } else {
        for (;count != n; count++)
            (*dest)[count] = src[count];
        (*dest)[count] = '\0';
    }
}
