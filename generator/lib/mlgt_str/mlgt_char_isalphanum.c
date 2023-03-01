/*
** EPITECH PROJECT, 2022
** mlgt_char_isalphanum
** File description:
** mlgt_char_isalphanum
*/

int mlgt_char_isalphanum(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}
