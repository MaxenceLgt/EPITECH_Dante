/*
** EPITECH PROJECT, 2023
** file_manage_head
** File description:
** file_manage_head
*/

#ifndef FILE_MANAGE_HEAD_
    #define FILE_MANAGE_HEAD_

    #include "map_struct.h"

    /*
    @brief Open a file and convert his content into a string
    @param file: The file you want to open
    */
    char *open_file(char *file);

    /*
    @brief Function that convert a string into a string array
    @param buf: The string you want to convert
    */
    char **convert_str_to_arr(char *buf);

    /*
    @brief Function that free a string array
    @param array The array you want to free
    */
    void free_array(char **array);

    /*
    @brief Function that convert an array of string containing * and X
    by an array of int containing 0 for * and -1 for X
    @param s_map: Structure containing the string to convert
    */
    int **convert_map_to_int(m_map *s_map);

#endif /* !FILE_MANAGE_HEAD_ */
