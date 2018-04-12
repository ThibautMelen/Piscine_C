#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char 	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i <= len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	char *final_str;
	long nbr_cpy_forlen;
	long len_final_str;
	long is_neg;
	long i;

	i = 0;
	len_final_str = 0;
	if (nbr == -2147483648)
	{
		if(!(final_str = malloc(sizeof(char) * 12)))
			return (0);
		final_str = "-2147483648\n";
		return (final_str);
	}
	else if (nbr == 0)
	{
		if(!(final_str = malloc(sizeof(char) * 2)))
			return (0);
		final_str[0] = '0';
		final_str[1] = '\0';
		return (final_str);
	}
	is_neg = 0;
	nbr_cpy_forlen = nbr;
	while (nbr_cpy_forlen > 0)
	{	
		nbr_cpy_forlen /= 10;
		len_final_str++;
	}
	if (nbr < 0)
	{
		is_neg = 1;
		nbr *= -1;
		len_final_str++;
	}
	if(!(final_str = malloc(sizeof(char) * len_final_str)))
		return (0);
	while (nbr > 0)
	{
		final_str[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (is_neg == 1)
	{
		final_str[i] = '-';
		i++;
	}
	final_str[i] = '\0';
	return (ft_strrev(final_str));
}
