/*
** EPITECH PROJECT, 2023
** mlgt_str_head
** File description:
** mlgt_str_head
*/

#ifndef MLGT_STR_HEAD_
    #define MLGT_STR_HEAD_

    #define _GNU_SOURCE

    int mlgt_char_islow(char c);
    int mlgt_char_isup(char c);
    void mlgt_putchar(char c);
    void mlgt_putstr(char const *str);
    void mlgt_strupcase(char **str);
    int mlgt_strlen(char const *str);
    int mlgt_char_isalpha(char c);
    int mlgt_char_isnum(char c);
    int mlgt_char_isalphanum(char c);
    void mlgt_strlowcase(char **str);
    char *mlgt_strdup(char const *src);
    void mlgt_revstr(char **str);
    int mlgt_strncmp(char const *s1, char const *s2, int n);
    int mlgt_strcmp(char const *s1, char const *s2);
    void mlgt_strcat(char **dest, char *src);
    void mlgt_strcpy(char **dest, char *src);
    char **mlgt_word_array_zero(char *str);
    void mlgt_print_word_array(char **tab);
    void mlgt_strncpy(char **dest ,char *src, int n);
    int mlgt_put_nbr(int nb);
    int mlgt_getnbr(char *str);
    void mlgt_strncat(char **dest, char *src, int nb);
    int mlgt_strlen_n(char const *str);
    char *mlgt_strndup(char const *src, int size);
    int mlpf_printf(const char *format, ...);

#endif /* !MLGT_STR_HEAD_ */
