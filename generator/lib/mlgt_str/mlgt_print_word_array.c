/*
** EPITECH PROJECT, 2022
** mlgt_print_word_array
** File description:
** mlgt_print_word_array
*/

#include <stdlib.h>
#include <unistd.h>
#include "mlgt_str_head.h"

void mlgt_print_word_array(char **tab)
{
    for (unsigned int i = 0; tab[i] != NULL; i++){
        mlgt_putstr(tab[i]);
        write(1, "\n", 1);
    }
}
