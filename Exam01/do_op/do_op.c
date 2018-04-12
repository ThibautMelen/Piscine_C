#include <stdlib.h>
#include <stdio.h>

void	ft_doop(int nb1, char operator, int nb2)
{
	if(operator == '+')
		printf("%d", (nb1 + nb2));
	else if(operator == '-')
		printf("%d", (nb1 - nb2));
	else if(operator == '*')
		printf("%d", (nb1 * nb2));
	else if(operator == '/')
		printf("%d", (nb1 / nb2));
	else if(operator == '%')
		printf("%d", (nb1 % nb2));
}

int		main(int argc, char **argv)
{
	if(argc == 4)
		ft_doop(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	printf("\n");
	return (0);
}
