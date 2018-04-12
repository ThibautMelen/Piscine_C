/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 01:18:51 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/09 01:31:58 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long number;

	number = (long)nb;
	if (number < 0)
	{
		ft_putnbr('-');
		number *= -1;
	}
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}

void	ft_display_chess(int *q)
{
	int i;
	int j;
	int dames_on_chess;

	dames_on_chess = 8;
	i = 0;
	j = 0;
	while (i < dames_on_chess)
	{
		while (j < dames_on_chess)
		{
			if (q[i] == j)
				ft_putnbr(j + 1);
			j++;
		}
		j = 0;
		i++;
	}
	ft_putchar('\n');
}

int		ft_placement_dames(int *tab_chess, int dames_on_chess)
{
	int i;
	int sous_x;

	i = 0;
	while (i < dames_on_chess)
	{
		if (tab_chess[i] == tab_chess[dames_on_chess])
			return (0);
		sous_x = tab_chess[i] - tab_chess[dames_on_chess];
		if (sous_x < 0)
			sous_x *= -1;
		if (sous_x == (dames_on_chess - i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_chess_recurcive(int *tab_chess, int *nb_solutions, int d_chess)
{
	int i;
	int nbdames;

	i = 0;
	nbdames = 8;
	if (d_chess == nbdames)
	{
		ft_display_chess(tab_chess);
		(*nb_solutions)++;
	}
	else
	{
		while (i < nbdames)
		{
			tab_chess[d_chess] = i++;
			if (ft_placement_dames(tab_chess, d_chess) != 0)
				ft_chess_recurcive(tab_chess, nb_solutions, d_chess + 1);
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int tab_chess[8];
	int nb_solutions;
	int dames_on_chess;

	nb_solutions = 0;
	dames_on_chess = 0;
	ft_chess_recurcive(tab_chess, &nb_solutions, dames_on_chess);
}
