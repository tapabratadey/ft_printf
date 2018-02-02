#include "ft_print.h"
// Precision

void    fill_precision(const char *format, t_specifiers *five_strings)
{
    int precision;

    precision = 0;
    while (is_flag(format))
        format++;
    while (ft_isdigit((int)*format))
        format++;
    while (*format)
    {
        if (*format == '.')
        {
            format++;
            precision = ft_atoi(format);
        }
        else
        {
            ft_putchar(*format);
            format++;
        }
    }
    five_strings->precision = precision;
}