#include "ft_print.h"
// flags

void    fill_flags(const char *format, t_specifiers *five_strings)
{
    if (*format == '%')
        format++;
    while (*format)
    {
        if (*format == '-')
            add_to_end_of_string(&(five_strings->flags), '-');
        else if (*format == '+')
            add_to_end_of_string(&(five_strings->flags), '+');
        else if (*format == '#')
            add_to_end_of_string(&(five_strings->flags), '#');
        else if (*format == '0')
            add_to_end_of_string(&(five_strings->flags), '0');
        else if (*format == ' ')
            add_to_end_of_string(&(five_strings->flags), ' ');
        format++;
    }
    
}