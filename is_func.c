#include "ft_print.h"

// check sub-specifiers

char    is_flag(const char *format)
{
    int i;

    i = 0; 
    if (ft_strchr("-+#0 ", format[i]))
        return (1);
    return (0);
}

char    is_length(const char *format)
{
    int i;

    i = 0; 
    if (ft_strchr("hljzL", format[i]))
        return (1);
    return (0);
}

char    is_specifier(const char *format)
{
    int i;

    i = 0; 
    if (ft_strchr("sSpdDioOuUxXcC", format[i]))
        return (1);
    return (0);
}

// check function

char    *move_till_end(const char *format)
{
    while (is_flag(format))
        format++;
    while (ft_isdigit((int)*format))
        format++;
    if (*format == '.')
        format++;
    while (ft_isdigit((int)*format))
        format++;
    while (is_length(format))
        format++;
    while (is_specifier(format))
        format++;
    return ((char *)format);
}