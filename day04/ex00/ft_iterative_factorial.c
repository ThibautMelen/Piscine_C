/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 12:11:20 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/08 12:53:53 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	long	res;
	int		i;

	i = 1;
	res = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	while (i <= nb)
		res = res * i++;
	return (res);
}
