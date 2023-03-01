/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include "mlpf_head.h"

int mlpf_put_nbr(int nb, int *counter)
{
    if (nb == -2147483648){
        write(1, "-2147483648", 11);
        (*counter) += 11;
        return (0);
    }
    if (nb < 0) {
        mlpf_putchar_count('-', counter);
        mlpf_put_nbr(-nb, counter);
    } else if ((nb % 10) == nb){
        mlpf_putchar_count(nb + 48, counter);
    } else {
        mlpf_put_nbr(nb / 10, counter);
        mlpf_putchar_count((nb % 10) + 48, counter);
    }
    return (0);
}
