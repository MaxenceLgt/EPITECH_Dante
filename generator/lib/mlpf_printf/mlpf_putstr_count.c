/*
** EPITECH PROJECT, 2022
** my_putstr_count
** File description:
** my_putstr_count
*/

#include <unistd.h>
#include "mlpf_head.h"

void mlpf_putstr_count(char const *str, int *counter)
{
    int len = mlpf_strlen(str);

    write(1, str, len);
    (*counter) += len;
}
