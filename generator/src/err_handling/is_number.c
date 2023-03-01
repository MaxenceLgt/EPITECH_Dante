/*
** EPITECH PROJECT, 2023
** is_number
** File description:
** is_number
*/

#include "mlgt_str_head.h"

int is_number(char *num)
{
    for (int i = 0; num[i] != '\0'; i++){
        if (!mlgt_char_isnum(num[i])){
            return (0);
        }
    }
    return (1);
}
