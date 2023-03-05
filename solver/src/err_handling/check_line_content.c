/*
** EPITECH PROJECT, 2023
** same_line_size
** File description:
** same_line_size
*/

#include <string.h>
#include <stdlib.h>
#include "file_manage_head.h"
#include "err_handling_head.h"

int check_line_content(char *file)
{
    char *buffer = open_file(file);
    char **arr_lines = convert_str_to_arr(buffer);

    for (int i = 0; arr_lines[i] != NULL; i++){
        if (!good_line_content(arr_lines[i])){
            free_array(arr_lines);
            free(buffer);
            return (0);
        }
    }
    free_array(arr_lines);
    free(buffer);
    return (1);
}
