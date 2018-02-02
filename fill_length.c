#include "ft_print.h"
// length

void    fill_length(const char *format, t_specifiers *five_strings)
{
    while (is_flag(format))
        format++;
    while (ft_isdigit((int)*format))
        format++;
    if (*format == '.')
        format++;
    while (ft_isdigit((int)*format))
        format++;
    five_strings->length = ft_strnew(0);
    while (is_length(format))
    {
        add_to_end_of_string(&(five_strings->length), *format);
        format++;
    }
}