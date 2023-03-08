/*
** EPITECH PROJECT, 2023
** add_pos_to_list
** File description:
** add_pos_to_list
*/

#include <stdlib.h>
#include "gen_link_list_ways.h"

int add_pos_to_list(m_list **list, int x, int y)
{
    m_list *temp = malloc(sizeof(m_list));
    temp->x = x;
    temp->y = y;
    temp->next = (*list);
    (*list) = temp;
}
