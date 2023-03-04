/*
** EPITECH PROJECT, 2023
** file_manage_head
** File description:
** file_manage_head
*/

#ifndef FILE_MANAGE_HEAD_
    #define FILE_MANAGE_HEAD_

    #include "map_struct.h"

    char *open_file(char *file);
    char **convert_str_to_arr(char *buf);
    void free_array(char **array);
    int **convert_map_to_int(m_map *s_map);

#endif /* !FILE_MANAGE_HEAD_ */
