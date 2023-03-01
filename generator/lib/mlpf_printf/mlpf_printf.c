/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** mini_printf
*/

#include <stdarg.h>
#include <unistd.h>
#include "mlpf_head.h"

int see_conditions2(int *i, va_list list, const char *format, int *counter)
{
    if (format[(*i)] == '%' && format[(*i) + 1] == '%'){
        mlpf_putchar_count('%', counter);
        (*i) += 2;
        return (0);
    }
    if (format[(*i)] == '%' && format[(*i) + 1] == 'c'){
        mlpf_putchar_count(va_arg(list, int), counter);
        (*i) += 2;
        return (0);
    }
    return (-1);
}

int see_conditions(int *i, va_list list, const char *format, int *counter)
{
    int stop = 0;

    if (format[(*i)] == '%' && format[(*i) + 1] == 's'){
        mlpf_putstr_count(va_arg(list, char*), counter);
        (*i) += 2;
        return (0);
    }
    if (format[(*i)] == '%' && (format[(*i) + 1] == 'd' ||
    format[(*i) + 1] == 'i')){
        mlpf_put_nbr(va_arg(list, int), counter);
        (*i) += 2;
        return (0);
    }
    stop = see_conditions2(i, list, format, counter);
    if (stop == -1)
        return (-1);
    return (0);
}

int mlpf_printf(const char *format, ...)
{
    int i = 0;
    va_list list;
    int counter = 0;
    int stop = 0;
    va_start(list, format);

    while (format[i] != '\0'){
        if (format[i] != '%'){
            mlpf_putchar_count(format[i], &counter);
            i++;
            continue;
        }
        stop = see_conditions(&i, list, format, &counter);
        if (stop == -1)
            return (-84);
    }
    va_end(list);
    return (counter);
}
