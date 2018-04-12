#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_nbw(char *str)
{
	int nbw;
	int i;

	i = 0;
	nbw = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			nbw++;
		i++;
	}
	return (nbw);
}

void	ft_rotstring(char *str)
{
	int i;
	int nbw;
	int view_word;

	view_word = 0;
	nbw = ft_nbw(str);
	i = 0;
	if(nbw == 0)
		return ;
	if(nbw == 1)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
		return ;
	}
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != ' ' && str[i] != '\t')
		i++;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0' && view_word > 0 && nbw >= 2)
		{
			ft_putchar(' ');
		}
		else if (str[i] != ' ' && str[i] != '\t')
		{
			ft_putchar(str[i]);
			view_word++;
		}
		i++;
	}
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] != ' ' && str[i] != '\t' && nbw != 1)
		ft_putchar(' ');
	while (str[i] != ' ' && str[i] != '\t' && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotstring(argv[1]);
	ft_putchar('\n');
	return (0);
}
