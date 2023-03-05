/*
** EPITECH PROJECT, 2023
** exec_solver
** File description:
** exec_solver
*/

#ifndef EXEC_SOLVER_
    #define EXEC_SOLVER_

    #include "map_struct.h"

    /*
    @brief Display the content of an int**
    @param s_map: The structure containing the int**
    */
    int display_int_map(m_map *s_map);

    /*
    @brief Display the content of a string array
    @param s_map: The structure containing the string array
    */
    int display_str_map(m_map *s_map);

    /*
    @brief Execute maze resolution algorithm
    @param s_map: Structure containing char ** and int ** maps and size max maze
    @param pos_x: The actual position x (row) in the map
    @param pos_y: The actual position y (column) in the map
    @param val: the value place in the position x y in the int **
    */
    int exec_int_resolution(m_map *s_map, int pos_x, int pos_y, int val);

    /*
    @brief Replace * by o to show the solution in the maze
    @param s_map: Structure containing char ** and int ** maps and size max maze
    @param pos_x: The actual position x (row) in the map
    @param pos_y: The actual position y (column) in the map
    */
    int display_solution(m_map *s_map, int pos_x, int pos_y);

    /*
    @brief Recursive call to display_solution function by
    going left if it is possible
    @param s_map: Structure containing char ** and int ** maps and size max maze
    @param pos_x: The actual position x (row) in the map
    @param pos_y: The actual position y (column) in the map
    @param val: the value place in the position x y in the int **
    */
    int go_left(m_map *s_map, int pos_x, int pos_y);

    /*
    @brief Recursive call to display_solution function by
    going right if it is possible
    @param s_map: Structure containing char ** and int ** maps and size max maze
    @param pos_x: The actual position x (row) in the map
    @param pos_y: The actual position y (column) in the map
    @param val: the value place in the position x y in the int **
    */
    int go_right(m_map *s_map, int pos_x, int pos_y);

    /*
    @brief Recursive call to display_solution function by
    going top if it is possible
    @param s_map: Structure containing char ** and int ** maps and size max maze
    @param pos_x: The actual position x (row) in the map
    @param pos_y: The actual position y (column) in the map
    @param val: the value place in the position x y in the int **
    */
    int go_top(m_map *s_map, int pos_x, int pos_y);

    /*
    @brief Recursive call to display_solution function by
    going bottom if it is possible
    @param s_map: Structure containing char ** and int ** maps and size max maze
    @param pos_x: The actual position x (row) in the map
    @param pos_y: The actual position y (column) in the map
    @param val: the value place in the position x y in the int **
    */
    int go_bottom(m_map *s_map, int pos_x, int pos_y);

    /*
    @brief Function to free all the array of m_map structure
    and the structure itself
    @param s_map: Structure containing char ** and int ** maps and size max maze
    */
    void free_struct_elms(m_map *s_map);

#endif /* !EXEC_SOLVER_ */
