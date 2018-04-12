/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:34:07 by thmelen           #+#    #+#             */
/*   Updated: 2018/03/01 16:12:45 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_doop.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long number;

	number = (long)nb;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}

int		ft_atoi(char *str)
{
	int val;
	int i;
	int pn;

	val = 0;
	i = 0;
	pn = 1;
	while (str[i] <= 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pn = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	return (val * pn);
}
