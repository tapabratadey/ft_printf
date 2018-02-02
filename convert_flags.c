#include "ft_print.h"
// convert flags

void    convert_flags(char *result, t_specifiers *five_strings)
{
    char character;

    character = '\0';
    ft_putnbr((int)&(five_strings->flags));
    if ((ft_strequ((five_strings->flags), "#")))
        hash(&result, five_strings);
    ft_putnbr((int)&(five_strings->flags));
    if (!(ft_strequ(five_strings->flags, " ") && ft_strequ(five_strings->flags, "+"))) 
        space(character, &result);
}

// // convert to upper case 

// static void    capitalize(char *store)
// {
//     while (*store)
//     {
//         *store = ft_toupper(*store);
//         store++;
//     }
// }

// apply hash func

void    hash(char **result, t_specifiers *five_strings)
{
    char *hold;
    char *final;

    if (**result == '-')
        return ;
    if (five_strings->specifier == 'x')
    {
        hold = ft_strdup("0x");
        final = ft_strjoin (hold, *result);
    }
    else if (five_strings->specifier == 'X')
    {
        hold = ft_strdup("0X");
        final = ft_strjoin (hold, *result);
    }   
    else if (five_strings->specifier == 'o' || five_strings->specifier == 'O')
    {
        hold = ft_strdup("o");
        final = ft_strjoin (hold, *result);
    }
}


// apply space func

void    space(char character, char **result)
{
    char *hold;
    char *new;

    if (**result == '-')
        return ;
    hold = ft_strnew(1);
    hold[0] = character;
    new = ft_strjoin(hold, *result);
    ft_strdel(result);
    ft_strdel(&hold);
    result = &new;
}