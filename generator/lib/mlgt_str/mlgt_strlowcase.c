/*
** EPITECH PROJECT, 2022
** mlgt_strlowcase
** File description:
** mlgt_strlowcase
*/

#include "mlgt_str_head.h"

void mlgt_strlowcase(char **str)
{
    for (int i = 0; (*str)[i] != '\0'; i++){
        if (mlgt_char_isup((*str)[i]))
            (*str)[i] += 32;
    }
}
