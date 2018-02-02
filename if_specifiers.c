#include "ft_print.h"

// check if nothing there

int    if_whatever(t_specifiers *five_strings)
{
    if (five_strings->specifier == 0)
        return (1);
    return (0);
} 

// check if %

int    if_percent(t_specifiers *five_strings)
{
    if ((five_strings->specifier) == '%')
        return (1);
    return (0);        
} 

// check if signed number

int    if_signed(t_specifiers *five_strings)
{
    if (ft_strchr("dDi", (five_strings->specifier) == 0))
        return (1);
    return (0);
} 

// check if usigned number

int    if_unsigned(t_specifiers *five_strings)
{
    if (ft_strchr("uUoOxXp", (five_strings->specifier) == 0))
        return (1);
    return (0);
} 

// check if wint_t

int    if_wint_t(t_specifiers *five_strings)
{
    if ((five_strings->specifier != 'c') && (five_strings->specifier != 'C'))
        return (0);
    if ((five_strings->specifier == 'c') && ft_strequ((five_strings->length), "l") == 0)
        return (0);
    return (1); 
} 

// check if char *

int    if_char_p(t_specifiers *five_strings)
{
    if (five_strings->specifier != 's')
        return (0);
    if (ft_strlen(five_strings->length) != 0)
        return (0);
    return (1);
} 

// check if char

int    if_char(t_specifiers *five_strings)
{
    if (five_strings->specifier != 'c')
        return (0);
    if (ft_strlen(five_strings->length) != 0)
        return (0);
    return (1);
} 

// check if wchar_t_p

int    if_wchar_t_p(t_specifiers *five_strings)
{
    if ((five_strings->specifier != 's') && (five_strings->specifier != 'S'))
        return (0);
    if ((five_strings->specifier == 's') && ft_strequ((five_strings->length), "l") == 0)
        return (0);
    return (1);
}