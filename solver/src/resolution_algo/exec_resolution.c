/*
** EPITECH PROJECT, 2023
** exec_resolution
** File description:
** exec_resolutio,
*/

#include <string.h>
#include <stdio.h>
#include "define_header.h"
#include "exec_solver_head.h"

int exec_resolution(m_map *s_map)
{
    exec_int_resolution(s_map, 0, 0, 1);
    printf("je sors de la resolution\n");
    if (BEG == -1 || END == -1 || END == 0) {
        printf("no solution found");
        return (0);
    }
    display_solution(s_map, MAX_X - 1, MAX_Y - 1);
    display_str_map(s_map);
    free_struct_elms(s_map);
    return (0);
}
