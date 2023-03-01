/*
** EPITECH PROJECT, 2022
** mlgt_strupcase
** File description:
** mlgt_strupcase
*/

#include "mlgt_str_head.h"

void mlgt_strupcase(char **str)
{
    for (int i = 0; (*str)[i] != '\0'; i++){
        if (mlgt_char_islow((*str)[i]))
            (*str)[i] -= 32;
    }
}
