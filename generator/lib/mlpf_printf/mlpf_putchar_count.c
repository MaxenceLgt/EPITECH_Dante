/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>

void mlpf_putchar_count(char c, int *counter)
{
    write(1, &c, 1);
    (*counter) += 1;
}
