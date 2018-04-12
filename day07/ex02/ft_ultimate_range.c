/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 22:44:38 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/23 12:55:02 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *tab;

	i = 0;
	len = max - min;
	if (min >= max || !(tab = (int*)malloc(sizeof(int) * len)))
	{
		range = 0;
		return (0);
	}
	else
	{
		while (i < len)
		{
			tab[i] = min + i;
			i++;
		}
	}
	*range = tab;
	return (i);
}
