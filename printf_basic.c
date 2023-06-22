#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "my.h"

void s_flags(va_list *list)
{
    char *src = va_arg(*list, char *);

    my_putstr(src);
}

void c_flags(va_list *list)
{
    int c = va_arg(*list, int);

    my_putchar(c);
}

void d_flags(va_list *list)
{
    int nbr = va_arg(*list, int);

    my_putnbr(nbr);
}

void i_flags(va_list *list)
{
    int nbr2 = va_arg(*list, int);

    my_putnbr(nbr2);
}