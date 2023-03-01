/*
** EPITECH PROJECT, 2022
** mlgt_put_nbr
** File description:
** mlgt_put_nbr
*/

#include <unistd.h>
#include "mlgt_str_head.h"

int mlgt_put_nbr(int nb)
{
    if (nb == -2147483648){
        write(1, "-2147483648", 11);
        return (0);
    }
    if (nb < 0) {
        write(1, &"-", 1);
        mlgt_put_nbr(-nb);
    } else if ((nb % 10) == nb){
        mlgt_putchar(nb + 48);
    } else {
        mlgt_put_nbr(nb / 10);
        mlgt_putchar((nb % 10) + 48);
    }
    return (0);
}
