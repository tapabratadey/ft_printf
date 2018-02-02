#include "ft_print.h"

// jump table for specifier

char    *jump_table(const char *format, t_specifiers *five_strings, va_list ap)
{
    if (if_whatever(five_strings))
        return (get_whatever(format));
    if (if_percent(five_strings))
        return (get_percent(five_strings));
    if (if_char(five_strings))
        return (get_char(five_strings, ap));
    if (if_char_p(five_strings))
        return (get_char_p(five_strings, ap));
    if (if_wchar_t_p(five_strings))
        return ((char*)get_wchar_t_p(five_strings, ap));
    if (if_signed(five_strings))
        return (get_signed(five_strings, ap));
    if (if_unsigned(five_strings))
        return (get_unsigned(five_strings, ap));
    if (if_wint_t(five_strings))
        return ((char*)get_wint_t(five_strings, ap));
    return (0);
}