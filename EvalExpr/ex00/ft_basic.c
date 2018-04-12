/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:26:19 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/24 23:51:09 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_eval_expr.h"

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

int		ft_atoi_revenge(char **str)
{
	int val;
	int i;
	int pn;

	val = 0;
	i = 0;
	pn = 1;
	while (**str <= 32)
		(*str)++;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			pn = -1;
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		val = (val * 10) + (**str - '0');
		(*str)++;
	}
	return (val * pn);
}
