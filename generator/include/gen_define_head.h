/*
** EPITECH PROJECT, 2023
** gen_define_head
** File description:
** gen_define_head
*/

#ifndef GEN_DEFINE_HEAD_
    #define GEN_DEFINE_HEAD_

    #define NEXT_YP maze->maze[(*y) + 2][(*x)]
    #define NEXT_YM maze->maze[(*y) - 2][(*x)]
    #define NEXT_XP maze->maze[(*y)][(*x) + 2]
    #define NEXT_XM maze->maze[(*y)][(*x) - 2]

#endif /* !GEN_DEFINE_HEAD_ */
