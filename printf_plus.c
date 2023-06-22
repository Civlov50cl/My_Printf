#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "my.h"

void o_flags(va_list *list)
{
    int nbo = va_arg(*list, int);

    my_octal_nbr(nbo);
}