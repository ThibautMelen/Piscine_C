/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:12:33 by thmelen           #+#    #+#             */
/*   Updated: 2018/03/01 16:12:37 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_doop.h"

void	do_op(char *str, int (*ft_op[5])(int, int), int nb1, int nb2)
{
	char	op[5];
	int		i;

	i = 0;
	op[0] = '+';
	op[1] = '-';
	op[2] = '*';
	op[3] = '/';
	op[4] = '%';
	while (str[0] != op[i] && i < 5)
		i++;
	if (str[0] == 0 || i == 5 || str[1] != 0)
		ft_putstr("0\n");
	else
	{
		if (i == 3 && nb2 == 0)
			ft_putstr("Stop : division by zero\n");
		else if (i == 4 && nb2 == 0)
			ft_putstr("Stop : modulo by zero\n");
		else
		{
			ft_putnbr((*ft_op[i])(nb1, nb2));
			ft_putchar('\n');
		}
	}
}
