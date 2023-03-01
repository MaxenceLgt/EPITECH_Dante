/*
** EPITECH PROJECT, 2022
** mlgt_strlen
** File description:
** mlgt_strlen
*/

int mlgt_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i += 1;
    return (i);
}

int mlgt_strlen_n(char const *str)
{
    int i = 0;

    while (str[i] != '\n' && str[i] != '\0')
        i++;
    return (i);
}
