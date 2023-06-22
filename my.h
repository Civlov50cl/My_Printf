#ifndef __MY_H__
    #define __MY_H__
        void s_flags(va_list *list);
        void c_flags(va_list *list);
        void d_flags(va_list *list);
        void i_flags(va_list *list);
        void o_flags(va_list *list);
        void x_flags(va_list *list);
        void my_printf(char *src, ...);
        void my_putstr(char const *str);
        int my_putnbr(int nb);
        int my_octal_nbr(int nbo);
        int my_hex_nbr(int nbh);
        int my_putchar(char c);
        int my_strlen(char *str);
        int findindex(char *tab, char element);
#endif
