/*
** EPITECH PROJECT, 2022
** mlgt_putstr
** File description:
** mlgt_putstr
*/

#include <unistd.h>
#include "mlgt_str_head.h"

void mlgt_putstr(char const *str)
{
    write(1, str, mlgt_strlen(str));
}
