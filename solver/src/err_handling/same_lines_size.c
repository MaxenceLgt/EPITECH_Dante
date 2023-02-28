/*
** EPITECH PROJECT, 2023
** same_line_size
** File description:
** same_line_size
*/

#include <string.h>
#include <stdlib.h>
#include "file_manage_head.h"

int same_lines_size(char *file)
{
    char *buffer = open_file(file);
    char **arr_lines = convert_str_to_arr(buffer);
    int size_line = strlen(arr_lines[0]);

    for (int i = 0; arr_lines[i] != NULL; i++){
        if (strlen(arr_lines[i]) != size_line){
            free_array(arr_lines);
            free(buffer);
            return (0);
        }
    }
    free_array(arr_lines);
    free(buffer);
    return (1);
}
