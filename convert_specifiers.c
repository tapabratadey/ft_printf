#include "ft_print.h"

// get whatever

char    *get_whatever(const char *format)
{
    char    *result;
    char    *end;

    end = move_till_end(format);
    format--;
    if (is_specifier(format) == 0)
        return (0);
    result = ft_memcpy(ft_strnew(end - format), format, end - format);
    return (result);
}

// get percent

char    *get_percent(t_specifiers *five_strings)
{
    char *result;

    result = ft_strdup("%");
    convert_flags(result, five_strings);
    // convert_width(result, five_strings);
    return (result);
}

// get char

char    *get_char(t_specifiers *five_strings, va_list ap)
{
    char result;
    char *store;

    
    store = ft_strnew(1);
    result  = (char)va_arg(ap, int);
    store[0] = result;
    convert_flags(store, five_strings);
    // convert_width(store, five_strings);
    return (store);
}

// get char_p

char    *get_char_p(t_specifiers *five_strings, va_list ap)
{
    char *result;

    result = va_arg(ap, char*);
    convert_flags(result, five_strings);
    // convert_width(result, five_strings);
    return (result);
}

// get wchar_t_p

char    *get_wchar_t_p(t_specifiers *five_strings, va_list ap)
{
    char *result;
    
    result = (char*)va_arg(ap, wchar_t*);
    convert_flags(result, five_strings);
    // convert_width(result, five_strings);
    return (result);
}


// get signed

char    *get_signed(t_specifiers *five_strings, va_list ap)
{
    char *result;
    intmax_t number;

    number = va_arg(ap, intmax_t);
    convert_signed_length(&number, five_strings);
    result = ft_itoa(number);
    // convert_precision(result, five_strings);
    convert_flags(result, five_strings);
    // convert_width(result, five_strings);
    return (result);
}

// get unsigned

char    *get_unsigned(t_specifiers *five_strings, va_list ap)
{
    char *result;
    uintmax_t number;

    number = va_arg(ap, uintmax_t);
    convert_unsigned_length(&number, five_strings);
    result = ft_itoa(number);
    convert_flags(result, five_strings);
    // convert_width(result, five_strings);
    return (result);
}

// get wint_t

char    *get_wint_t(t_specifiers *five_strings, va_list ap)
{
    char *result;

    result = (char*)va_arg(ap, intmax_t);
    // convert_precision(result, five_strings);
    convert_flags(result, five_strings);
    // convert_width(result, five_strings);
    return (result);
}