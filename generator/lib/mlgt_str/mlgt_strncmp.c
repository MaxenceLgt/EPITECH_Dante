/*
** EPITECH PROJECT, 2022
** mlgt_strncmp
** File description:
** mlgt_strncmp
*/

#include "mlgt_str_head.h"

int mlgt_strncmp(char const *s1, char const *s2, int n)
{
    int count = 1;

    if (n == 0)
        return (0);
    if (mlgt_strlen(s1) < n && mlgt_strlen(s2) < n)
        return (mlgt_strcmp(s1, s2));
    while (s1[count - 1] != '\0' && s2[count - 1] != '\0' &&
    s1[count - 1] == s2[count - 1] && count != n)
        count++;
    return (s1[count - 1] - s2[count - 1]);
}
