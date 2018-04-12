#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_expand(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0'))
			ft_putstr("   ");
		else if (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_expand(argv[1]);
	ft_putchar('\n');
	return (0);
}
