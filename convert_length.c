#include "ft_print.h"
// convert length

void    convert_signed_length(intmax_t *number, t_specifiers *five_strings)
{
    if (five_strings->specifier == 'D')
        *number = (long int)*number;
    else if (ft_strlen(five_strings->length) == 0)
        *number = (int)*number;
    else if (ft_strequ(five_strings->length, "hh") == 1)
        *number = (char)*number;
    else if (ft_strequ(five_strings->length, "h") == 1)
        *number = (short int)*number;
    else if (ft_strequ(five_strings->length, "l") == 1)
        *number = (long int)*number;
    else if (ft_strequ(five_strings->length, "ll") == 1)
        *number = (long long int)*number;

}

void	convert_unsigned_length(uintmax_t *number, t_specifiers *five_strings)
{
	if (five_strings->specifier == 'U' || five_strings->specifier == 'p')
		*number = (unsigned long int)*number;
	else if (ft_strlen(five_strings->length) == 0)
		*number = (unsigned int)*number;
	else if (ft_strequ(five_strings->length, "hh") == 1)
		*number = (unsigned char)*number;
	else if (ft_strequ(five_strings->length, "h") == 1)
		*number = (unsigned short int)*number;
	else if (ft_strequ(five_strings->length, "l"))
		*number = (unsigned long int)*number;
	else if (ft_strequ(five_strings->length, "ll") == 1)
		*number = (unsigned long long int)*number;
}