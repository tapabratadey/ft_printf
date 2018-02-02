#include "ft_print.h"
// create_specifiers creates an object which 
//..holds enough space for all of the sub-specifiers

t_specifiers    *init_struct(void)
{
     t_specifiers *five_strings;

     five_strings = (t_specifiers *)malloc(sizeof(t_specifiers) * 1);
     five_strings->flags = ft_strnew(0);
     five_strings->width = 0;
     five_strings->precision = 0;
     five_strings->length = ft_strnew(0);
     five_strings->specifier = ft_strnew(0);
     return (five_strings);
}