/*
** EPITECH PROJECT, 2023
** free_array
** File description:
** free_array
*/

#include <stdlib.h>

void free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
