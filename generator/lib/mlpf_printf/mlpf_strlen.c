/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** my_strlen
*/

int mlpf_strlen(char const *str)
{
    int i = 0;

    for (;str[i] != '\0'; i++);
    return (i);
}
