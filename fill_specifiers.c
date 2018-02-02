#include "ft_print.h"
// specifiers

void    fill_specifiers(const char *format, t_specifiers *five_strings)
{
    format = move_till_end(format);
    five_strings->specifier = *format;
}