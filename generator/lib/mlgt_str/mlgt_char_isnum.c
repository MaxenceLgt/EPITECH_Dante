/*
** EPITECH PROJECT, 2022
** mlgt_char_isnum
** File description:
** mlgt_char_isnum
*/

int mlgt_char_isnum(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
