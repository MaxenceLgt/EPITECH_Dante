/*
** EPITECH PROJECT, 2023
** go_next_list
** File description:
** go_next_list
*/

#include <stdlib.h>
#include "gen_link_list_ways.h"

void go_next_list(m_list **list)
{
    m_list *temp = (*list);
    (*list) = (*list)->next;
    free(temp);
}
