/*
** EPITECH PROJECT, 2023
** main_call_head
** File description:
** main_call_head
*/

#ifndef MAIN_CALL_HEAD_
    #define MAIN_CALL_HEAD_

    #include "map_struct.h"

    /*
    @brief err_handling is a function that verify is there is one error on the
    parameters call when program is call
    @param ac: Number of arguments enter as parameter
    @param av: Name of arguments enter as parameter
    @return 84 On error (bad parameters). 0 On succes.
    */
    int err_handling(int ac, char **av);

    /*
    @brief exec_resolution is a function that will call all the
    function to execute the maze solver algorithm
    @param s_map: Structure containing int array, string array and
    size of arrays (lines and colums)
    @return 0 After execution.
    */
    int exec_resolution(m_map *s_map);

    /*
    @brief create_map_struct is a function that will create the structure
    containing int and string array and length and width of the arrays.
    @param s_map: The structure to be created
    @param file: the file to be convert
    @return Nothing
    */
    void create_map_struct(m_map *s_map, char *file);

    void increase_stack(void);

#endif /* !MAIN_CALL_HEAD_ */
