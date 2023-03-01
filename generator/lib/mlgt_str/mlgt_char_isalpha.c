/*
** EPITECH PROJECT, 2022
** mlgt_char_isalpha
** File description:
** mlgt_char_isalpha
*/

int mlgt_char_isalpha(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}
