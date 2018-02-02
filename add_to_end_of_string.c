#include "ft_print.h"
// function to add to characters to the strings

void    add_to_end_of_string(char **name, char character)
{
    char *new;

    new = ft_strnew(ft_strlen(*name) + 1);
    new = ft_strcpy(new, *name);
    new[ft_strlen(*name)] = character;
    ft_strdel (name);
    *name = new;
}