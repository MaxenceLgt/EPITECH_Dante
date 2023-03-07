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
    bool check_valid_next(m_list **list, m_maze *maze);
    void go_rpos(m_list **list, m_maze *maze);

#endif /* !GEN_RECT_GEN_HEAD_ */
