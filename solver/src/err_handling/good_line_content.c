/*
** EPITECH PROJECT, 2023
** good_line_content
** File description:
** good_line_content
*/

int good_line_content(char *line)
{
    for (int i = 0; line[i] != '\0'; i++)
        if (line[i] != 'X' && line[i] != '*')
            return (0);
    return (1);
}
