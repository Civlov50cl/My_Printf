#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "my.h"

int findindex(char *tab, char element)
{
    int index = 0;

    for (index = 0; tab[index] != 0; index++) {
        if (tab[index] == element)
            return (index);
    }
    return (84);
}

void my_printf(char *src, ...)
{
    void (*tabf[5]) (va_list *) = {s_flags,
    c_flags, d_flags, i_flags, o_flags};
    char tab[6] = {'s', 'c','d', 
    'i', 'o', 0};
    va_list list;
    int x = 0;
    int tmpy = 0;

    va_start(list, src);
    while (src[x] != 0) {
        x = x + 1;
        if (x != 0 && src[x - 1] == '%') {
            tmpy = findindex(tab, src[x]);
            if (tmpy != -1)
                (*tabf[tmpy]) (&list);
        }
        else if (src[x] != '%')
            write(1, &src[x], 1);
    }
    va_end(list);
}