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
    display_int_map(s_map);
    return (0);
}
