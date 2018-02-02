#include "ft_print.h"


// delete

void    delete(t_specifiers **delete)
{
    ft_strdel(&((*delete)->flags));
    ft_strdel(&((*delete)->length));
    ft_memdel((void**)delete);
}

// manager

char    *manager(const char *format, va_list ap)
{
    char *result;
    t_specifiers *five_strings;

    five_strings = (t_specifiers *)malloc(sizeof(t_specifiers));
    fill_struct_info(format, five_strings);
    result = jump_table(format, five_strings, ap);
    delete(&five_strings);
    return (result);
}

// // printing

// void    ft_putstr(const char *str)
// {
//     int i;

//     i = 0;
//     while (str[i])
//     {
//         ft_putchar(str[i]);
//         i++;
//     }
// }

// flags, width, precision, 
int     ft_printf(const char *format, ...)
{
    va_list ap;
    int counter;
    char *result;


    va_start (ap, format);
    counter = 0;
    while (*format)
    {
        if (*format != '%')
        {
            ft_putchar(*format);
            format++;
            counter++;
        }
        else
        {
            result = manager(format, ap);
            counter += ft_strlen(result);
            format = move_till_end(format);
            ft_strdel(&result);
        }  
    }
    va_end(ap);
    return (counter);
}