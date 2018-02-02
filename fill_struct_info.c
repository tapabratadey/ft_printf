#include "ft_print.h"
// fill struct

void    fill_struct_info(const char *format, t_specifiers *five_strings)
{
        fill_flags(format, five_strings);
        fill_width(format, five_strings);
        fill_precision(format, five_strings);
        fill_length(format, five_strings);
        fill_specifiers(format, five_strings);
}
