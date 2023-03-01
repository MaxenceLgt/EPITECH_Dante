/*
** EPITECH PROJECT, 2022
** mlgt_strncat
** File description:
** mlgt_strncat
*/

#include "mlgt_str_head.h"

void mlgt_strncat(char **dest, char *src, int nb)
{
    int i = 0;
    int dest_max = mlgt_strlen((*dest));

    if (nb > mlgt_strlen(src)){
        mlgt_strcat(dest, src);
    } else {
        while (i != nb){
            (*dest)[dest_max + i] = src[i];
            i++;
        }
    }
    (*dest)[dest_max + i] = '\0';
}
