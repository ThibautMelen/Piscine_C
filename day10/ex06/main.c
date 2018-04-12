/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:13:06 by thmelen           #+#    #+#             */
/*   Updated: 2018/03/01 16:13:11 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_doop.h"

int		main(int argc, char **argv)
{
	int		(*ft_op[5])(int, int);
	int		nb1;
	int		nb2;

	if (argc == 4)
	{
		nb1 = ft_atoi(argv[1]);
		nb2 = ft_atoi(argv[3]);
		ft_op[0] = ft_plus;
		ft_op[1] = ft_moins;
		ft_op[2] = ft_mul;
		ft_op[3] = ft_div;
		ft_op[4] = ft_mod;
		do_op(argv[2], ft_op, nb1, nb2);
	}
	return (0);
}
