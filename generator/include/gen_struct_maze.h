/*
** EPITECH PROJECT, 2023
** gen_struct_maze
** File description:
** gen_struct_maze
*/

#ifndef GEN_STRUCT_MAZE_
    #define GEN_STRUCT_MAZE_

    #include <stdbool.h>

typedef struct m_gen_struct_maze {
    int x;
    int y;
    bool perfect;
    char **maze;
} m_maze;

#endif /* !GEN_STRUCT_MAZE_ */
