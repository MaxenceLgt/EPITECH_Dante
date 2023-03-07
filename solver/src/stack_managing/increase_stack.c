/*
** EPITECH PROJECT, 2023
** increase_stack
** File description:
** increase_stack
*/

#include <sys/resource.h>

void increase_stack(void)
{
    __u_long size = 256L * 1024L * 1024L;
    struct rlimit r_lim;

    if (getrlimit(RLIMIT_STACK, &r_lim)){
        return;
    }
    if (r_lim.rlim_cur < size){
        r_lim.rlim_cur = size;
        setrlimit(RLIMIT_STACK, &r_lim);
        return;
    }
    return;
}
