#include "ft_print.h"
// Field width

void   fill_width(const char *format, t_specifiers *five_strings)
{
    int i;

    // char *space;
    // char *content;
    i = 0;

    while (is_flag(format))
        format++;
    
    // no. will determine the no. of spaces to add beginning of argument 
    
    if (format[i] > '0' && format[i] <= '9')
           five_strings->width = ft_atoi(format);
    
    // negative no. will determine the no. of spaces to add after the argument
    
    if (format[i] == '-')
    {
        i++;
        if (format[i] > '0' && format[i] <= '9')
                five_strings->width = ft_atoi(format);
    }   
 }