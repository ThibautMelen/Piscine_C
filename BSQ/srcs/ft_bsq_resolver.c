/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_resolver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:54:24 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/28 23:37:22 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_bsq.h"

void	ft_i_gotta_filling(int **tab, int best_sqr, int i_col, int j_lign)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < best_sqr)
	{
		while (j < best_sqr)
		{
			tab[i_col + i][j_lign + j] = SQUARE;
			j++;
		}
		j = 0;
		i++;
	}
}

int		ft_filling_sqr(int **tab, int best_sqr, int nb_lign, int nb_col)
{
	int i_col;
	int j_lign;

	i_col = 0;
	j_lign = 0;
	while (i_col < nb_col)
	{
		while (j_lign < nb_lign)
		{
			if (tab[i_col][j_lign] == best_sqr)
			{
				ft_i_gotta_filling(tab, best_sqr, i_col, j_lign);
				return (0);
			}
			j_lign++;
		}
		j_lign = 0;
		i_col++;
	}
	return (0);
}

int		ft_get_best_sqr(int **tab, int nb_lign, int nb_col)
{
	int i_col;
	int j_lign;
	int nb_max;

	i_col = 0;
	nb_max = 0;
	while (i_col < nb_col)
	{
		j_lign = 0;
		while (j_lign < nb_lign)
		{
			if (tab[j_lign][i_col] >= nb_max)
				nb_max = tab[j_lign][i_col];
			j_lign++;
		}
		i_col++;
	}
	return (nb_max);
}

int		ft_bsq_get_min(int **tab, int nb_lign, int nb_col)
{
	int nb1;
	int nb2;
	int nb3;

	nb1 = tab[nb_lign][nb_col + 1];
	nb2 = tab[nb_lign + 1][nb_col + 1];
	nb3 = tab[nb_lign + 1][nb_col];
	if (nb1 <= nb2 && nb1 <= nb3)
		return (nb1 + 1);
	else if (nb2 <= nb1 && nb2 <= nb3)
		return (nb2 + 1);
	else
		return (nb3 + 1);
}

void	ft_bsq_resolver(int **tab, int nb_lign, int nb_col)
{
	int i;
	int set_nb_col;
	int set_nb_lign;
	int best_sqr;

	i = 0;
	nb_lign -= 2;
	nb_col -= 2;
	set_nb_col = nb_col;
	set_nb_lign = nb_lign;
	while (nb_lign != -1)
	{
		while (nb_col != -1)
		{
			if (tab[nb_lign][nb_col] != 0)
				tab[nb_lign][nb_col] = ft_bsq_get_min(tab, nb_lign, nb_col);
			nb_col--;
		}
		nb_col = set_nb_col;
		nb_lign--;
	}
	best_sqr = ft_get_best_sqr(tab, set_nb_lign, set_nb_col);
	ft_filling_sqr(tab, best_sqr, set_nb_col + 2, set_nb_lign + 2);
}
