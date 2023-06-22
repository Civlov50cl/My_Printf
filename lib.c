#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "my.h"

int my_putchar(char c)
{
  write(1, &c, 1);
  return  (0);
}

void my_putstr(char const *str)
{
  int a = 0;

  while (str[a] != '\0') {
    my_putchar (str[a]);
    a = a + 1;
  }
}

int my_putnbr(int nb)
{
  int d = 1;
  int c = 0;
  int i = 0;

  if (nb < 0) {
    my_putchar('-');
     nb = nb * -1;
  }
  for (i = 0; (nb / (d * 10)) != 0; i++)
    d = d * 10;
  for (c = 0; i != c; c++) {
    my_putchar((nb / d) + 48);
    nb = nb % d;
    d = d / 10;
  }
  my_putchar(nb + 48);
  return (0);
}

int my_octal_nbr(int nbo)
{
  int rst = 0;
  int y = 1;

  while (nbo != 0) {
    rst = rst + (nbo % 8) * y;
    nbo = nbo / 8;
    y = y * 10;
  }
  my_putnbr(rst);
  return (0);
}