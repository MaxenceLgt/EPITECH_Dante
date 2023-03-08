/*
** EPITECH PROJECT, 2023
** gen_rect_gen_head
** File description:
** gen_rect_gen_head
*/

#ifndef GEN_RECT_GEN_HEAD_
    #define GEN_RECT_GEN_HEAD_

    #include "gen_struct_maze.h"
    #include "gen_link_list_head.h"
    #include <stdbool.h>

    m_maze *create_struct_maze(int ac, char **av);
    int exec_recursive_gen(m_list **list, m_maze *maze);
    bool check_valid_next(m_maze *maze, int *x, int *y);
    void go_rpos(m_maze *maze, int *x, int *y);
    void display_map(m_maze *maze);
    bool more_than_one_way(m_maze *maze, int *x, int *y);
    int add_pos_to_list(m_list **list, int x, int y);
    void make_it_imperfect(m_maze *maze);

#endif /* !GEN_RECT_GEN_HEAD_ */
