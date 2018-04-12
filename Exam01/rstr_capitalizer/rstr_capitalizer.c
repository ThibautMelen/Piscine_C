#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rstr_capitalizer(char *str)
{
	int i;

	i = 0;	
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while(str[i])
	{
		if ((str[i + 1] == '\t' || str[i + 1] == ' ' || str[i + 1] == '\0') && (str[i] >= 'a' && str[i] <= 'z'))
			ft_putchar (str[i] - 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc >= 2)
	{
		while (i < argc)
		{
			ft_rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
