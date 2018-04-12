/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_resolver_one_line.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:59:31 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/28 23:35:22 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_bsq.h"
#include "file_verify.h"

void	ft_bsq_resolver_one_car(int **tab, char *map, int nb_lign, int nb_col)
{
	if (tab[0][0] == 1)
		tab[0][0] = SQUARE;
	ft_bsq_print(tab, map, nb_lign, nb_col);
}

void	ft_bsq_resolver_one_col(int **tab, char *map, int nb_lign, int nb_col)
{
	int i;

	i = 0;
	while (i <= nb_lign)
	{
		if (tab[i][0] == 1)
		{
			tab[i][0] = SQUARE;
			ft_bsq_print(tab, map, nb_lign, nb_col);
			return ;
		}
		i++;
	}
	ft_bsq_print(tab, map, nb_lign, nb_col);
}

void	ft_bsq_resolver_one_lign(int **tab, char *map, int nb_lign, int nb_col)
{
	int i;

	i = 0;
	while (i <= nb_col)
	{
		if (tab[0][i] == 1)
		{
			tab[0][i] = SQUARE;
			ft_bsq_print(tab, map, nb_lign, nb_col);
			return ;
		}
		i++;
	}
	ft_bsq_print(tab, map, nb_lign, nb_col);
}

void	ft_bsq_resolver_one_sqr(int **tab, char *map, int nb_lign, int nb_col)
{
	if (tab[0][0] == 1 && tab[0][1] == 1 && tab[1][0] == 1 && tab[1][1] == 1)
	{
		tab[0][0] = SQUARE;
		tab[0][1] = SQUARE;
		tab[1][0] = SQUARE;
		tab[1][1] = SQUARE;
	}
	ft_bsq_print(tab, map, nb_lign, nb_col);
}

void	ft_bsq_resolver_one_sqr32(int **tab, char *map, int nb_lign, int nb_col)
{
	if (tab[0][1] == 1 && tab[1][1] == 1)
	{
		if (tab[0][1] == 1 && tab[1][1] == 1)
		{
			tab[0][0] = SQUARE;
			tab[0][1] = SQUARE;
			tab[1][0] = SQUARE;
			tab[1][1] = SQUARE;
		}
	}
	ft_bsq_print(tab, map, nb_lign, nb_col);
}
