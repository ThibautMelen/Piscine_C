/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:31:40 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/24 23:51:28 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_eval_expr.h"

int	ft_calculator(int nb1, char operator, int nb2)
{
	int		(*ft_oper[5])(int, int);
	char	ls_oper[5];
	int		i;

	i = 0;
	ls_oper[0] = '+';
	ls_oper[1] = '-';
	ls_oper[2] = '*';
	ls_oper[3] = '/';
	ls_oper[4] = '%';
	ft_oper[0] = &plus;
	ft_oper[1] = &moins;
	ft_oper[2] = &mult;
	ft_oper[3] = &divion;
	ft_oper[4] = &mod;
	while (i < 5)
	{
		if (ls_oper[i] == operator)
			return (ft_oper[i](nb1, nb2));
		i++;
	}
	return (0);
}
