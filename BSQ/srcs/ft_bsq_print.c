/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 20:23:23 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 21:19:34 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_bsq.h"

int		ft_get_skip_head(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

void	ft_bsq_print(int **tab, char *str, int nb_lign, int nb_col)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i < nb_lign)
	{
		while (j < nb_col)
		{
			if (tab[i][j] == SQUARE)
				ft_putchar(CAR_PLEIN);
			else if (tab[i][j] == 0)
				ft_putchar(CAR_OBSTACLE);
			else
				ft_putchar(CAR_VIDE);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
