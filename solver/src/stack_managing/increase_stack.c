/*
** EPITECH PROJECT, 2023
** increase_stack
** File description:
** increase_stack
*/

#include <sys/resource.h>

void increase_stack(void)
{
    struct rlimit r_lim;

    if (getrlimit(RLIMIT_STACK, &r_lim))
        return;
    r_lim.rlim_cur = r_lim.rlim_max;
    setrlimit(RLIMIT_STACK, &r_lim);
}
