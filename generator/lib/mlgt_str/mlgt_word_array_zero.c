/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include "mlgt_str_head.h"

static int count_words(char *str)
{
    int nb_words = 0;
    int parser = 0;

    while (str[parser] != '\0'){
        if (mlgt_char_isalphanum(str[parser]) == 1 && str[parser + 1] != '\0'
        && mlgt_char_isalphanum(str[parser + 1]) == 0)
            nb_words++;
        if (mlgt_char_isalphanum(str[parser]) == 1 && str[parser + 1] == '\0')
            nb_words++;
        parser++;
    }
    return (nb_words);
}

static int get_size_word(char *str)
{
    int count = 0;
    while (mlgt_char_isalphanum(str[count]) == 1)
        count++;
    return (count);
}

static char *make_copy(char *str, int nb_char)
{
    char *copy = malloc(sizeof(char) * nb_char + 1);
    int parser = 0;

    while (parser < nb_char){
        copy[parser] = str[parser];
        parser++;
    }
    copy[parser] = '\0';
    return (copy);
}

char **mlgt_word_array_zero(char *str)
{
    int nb_word = count_words(str);
    int parser = 0;
    int nb_char = 0;
    char *copy;
    char **array_str = malloc(sizeof(char *) * (nb_word + 1));

    nb_word = 0;
    while (str[parser] != '\0'){
        if (mlgt_char_isalphanum(str[parser]) == 1){
            nb_char = get_size_word(&str[parser]);
            copy = make_copy(&str[parser], nb_char);
            array_str[nb_word] = mlgt_strdup(copy);
            parser += nb_char;
            nb_word++;
            nb_char = 0;
        } else
            parser++;
    }
    array_str[nb_word] = NULL;
    return (array_str);
}
