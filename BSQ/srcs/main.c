/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:07:21 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/28 23:43:51 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_bsq.h"
#include "file_verify.h"

void	ft_prepare_bsq(int **tab, int nb_lign, int nb_col, char *map)
{
	if (nb_col == 1 && nb_lign == 1)
		ft_bsq_resolver_one_car(tab, map, nb_lign, nb_col);
	else if (nb_col == 2 && nb_lign == 2)
		ft_bsq_resolver_one_sqr(tab, map, nb_lign, nb_col);
	else if (nb_col == 2 && nb_lign == 3)
		ft_bsq_resolver_one_sqr32(tab, map, nb_lign, nb_col);
	else if (nb_lign >= 1 && nb_col == 1)
		ft_bsq_resolver_one_col(tab, map, nb_lign, nb_col);
	else if (nb_col >= 1 && nb_lign == 1)
		ft_bsq_resolver_one_lign(tab, map, nb_lign, nb_col);
	else
	{
		ft_bsq_resolver(tab, nb_lign, nb_col);
		ft_bsq_print(tab, map, nb_lign, nb_col);
	}
}

void	start_bsq(int ac, char **av)
{
	char	*map;
	int		**tab;
	int		nb_lign;
	int		nb_col;
	int		i;

	i = 1;
	while (i < ac)
	{
		if ((map = ft_verify_input(ac, av[i], i)))
		{
			nb_lign = ft_count_lign(map);
			nb_col = ft_count_col(map);
			tab = ft_parse_int(map);
			ft_prepare_bsq(tab, nb_lign, nb_col, map);
			if (i < (ac - 1))
				ft_putchar('\n');
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	char	*map;
	int		**tab;
	int		nb_lign;
	int		nb_col;
	int		i;

	i = 1;
	if (ac == 1)
	{
		if ((map = ft_verify_input(ac, av[i], i)))
		{
			nb_lign = ft_count_lign(map);
			nb_col = ft_count_col(map);
			tab = ft_parse_int(map);
			ft_prepare_bsq(tab, nb_lign, nb_col, map);
		}
	}
	else
		start_bsq(ac, av);
	return (0);
}
