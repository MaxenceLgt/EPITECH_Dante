/*
** EPITECH PROJECT, 2023
** exec_solver
** File description:
** exec_solver
*/

#ifndef EXEC_SOLVER_
    #define EXEC_SOLVER_

    #include "map_struct.h"

    int display_int_map(m_map *s_map);
    int display_str_map(m_map *s_map);
    int exec_int_resolution(m_map *s_map, int pos_x, int pos_y, int val);
    int display_solution(m_map *s_map, int pos_x, int pos_y);
    int go_left(m_map *s_map, int pos_x, int pos_y);
    int go_right(m_map *s_map, int pos_x, int pos_y);
    int go_top(m_map *s_map, int pos_x, int pos_y);
    int go_bottom(m_map *s_map, int pos_x, int pos_y);
    void free_struct_elms(m_map *s_map);

#endif /* !EXEC_SOLVER_ */
