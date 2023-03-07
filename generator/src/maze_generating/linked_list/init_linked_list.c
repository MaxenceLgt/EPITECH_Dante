/*
** EPITECH PROJECT, 2023
** init_linked_list
** File description:
** init_linked_list
*/

#include <stdlib.h>
#include "gen_link_list_ways.h"

void init_linked_list(int x, int y, m_list **pos)
{
    m_list *temp = malloc(sizeof(m_list));

    temp->x = x;
    temp->y = y;
    temp->next = NULL;
    (*pos) = temp;
}
