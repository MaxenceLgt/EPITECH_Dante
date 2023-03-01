/*
** EPITECH PROJECT, 2022
** mlgt_getnbr
** File description:
** mlgt_getnbr
*/

#include <stdio.h>
#include <limits.h>
#include "mlgt_str_head.h"

static int is_too_long(long int *res)
{
    if ((*res) > INT_MAX){
        (*res) = 0;
        return (1);
    }
    return (0);
}

int mlgt_getnbr(char *str)
{
    long int res = 0;
    unsigned int i = 0;

    if (mlgt_strlen(str) >= 11){
        if (mlgt_strncmp(str, "-2147483648", 11) == 0 &&
        !mlgt_char_isnum(str[11]) && str[11] != '\0')
            return (INT_MIN);
    }
    if (str[0] == '-' && mlgt_char_isnum(str[1]))
        return (-mlgt_getnbr(&str[1]));
    while (mlgt_char_isnum(str[i]) && !is_too_long(&res)){
        res *= 10;
        res += str[i] - 48;
        i++;
    }
    return (res);
}
