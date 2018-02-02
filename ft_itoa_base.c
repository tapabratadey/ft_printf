#include "ft_print.h"
// itoa_base

static long int		ft_abs(long int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}


static int			ft_len(long int nbr, long int base)
{
	int		len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr != 0)
	{
		nbr = nbr / base;
		len++;
	}
	return (len);
}

char				*ft_itoa_base(int nbr, int base)
{
	int			len;
	int			sign;
	char		*c;

	sign = (nbr < 0) ? -1 : 1;
	len = ft_len(nbr, base);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (NULL);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_abs(nbr % base);
		nbr = ft_abs(nbr / base);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}