/*
** EPITECH PROJECT, 2023
** mlgt_putchar
** File description:
** mlgt_putchar
*/

#include <unistd.h>

void mlgt_putchar(char c)
{
    write(1, &c, 1);
}
