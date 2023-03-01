/*
** EPITECH PROJECT, 2022
** mlgt_strcpy
** File description:
** mlgt_strcpy
*/

void mlgt_strcpy(char **dest, char *src)
{
    unsigned int i = 0;

    for (;src[i] != '\0'; i++)
        (*dest)[i] = src[i];
    (*dest)[i] = src[i];
}
