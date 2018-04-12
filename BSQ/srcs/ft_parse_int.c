/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:54:56 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 21:32:19 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_bsq.h"

int		ft_count_lign(char *str)
{
	int i;
	int nb_lign;

	i = 0;
	nb_lign = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			nb_lign++;
		i++;
	}
	return (nb_lign - 1);
}

int		ft_count_col(char *str)
{
	int i;
	int nb_col;

	i = 0;
	nb_col = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\n')
	{
		nb_col++;
		i++;
	}
	return (nb_col);
}

int		*ft_intdup_line(char *str, int nb_col, int *index_str)
{
	int	i;
	int car_vide;
	int car_obstacle;
	int	*dest;

	i = 0;
	while (str[i] != '\n')
		i++;
	car_vide = str[i - 3];
	car_obstacle = str[i - 2];
	i = 0;
	if (!(dest = malloc(sizeof(dest) * nb_col)))
		return (0);
	while (i < nb_col)
	{
		if (str[*index_str] == car_vide)
			dest[i] = 1;
		else if (str[*index_str] == car_obstacle)
			dest[i] = 0;
		(*index_str)++;
		i++;
	}
	(*index_str)++;
	return (dest);
}

int		**ft_parse_int(char *str)
{
	int	**tab_final;
	int	i;
	int	nb_lign;
	int	nb_col;
	int index_str;

	i = 0;
	index_str = 0;
	while (str[index_str] != '\n')
		index_str++;
	index_str++;
	nb_lign = ft_count_lign(str);
	nb_col = ft_count_col(str);
	if (!(tab_final = malloc(sizeof(tab_final) * nb_lign + 1)))
		return (NULL);
	while (i < nb_lign)
	{
		tab_final[i] = ft_intdup_line(str, nb_col, &index_str);
		i++;
	}
	tab_final[i] = NULL;
	return (tab_final);
}
