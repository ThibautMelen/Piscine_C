/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 18:06:37 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/19 18:03:04 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_str_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char **str, int argc)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i < argc)
	{
		while (j < argc - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
				ft_str_swap(str + j, str + j + 1);
			j++;
		}
		j = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc >= 2)
	{
		ft_sort_params(argv, argc);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
