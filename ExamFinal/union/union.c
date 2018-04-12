#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_verif(char *str, char letter, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if(str[i] == letter)
			return (0);
		i++;
	}
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if(ft_verif(s1, s1[i], i))
			ft_putchar(s1[i]);
		i++;
	}
	while (s2[j])
	{
		if(ft_verif(s1, s2[j], i) && ft_verif(s2, s2[j], j))
			ft_putchar(s2[j]);
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
