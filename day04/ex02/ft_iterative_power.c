/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 13:33:10 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/08 14:07:06 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int nbloop;

	i = 0;
	nbloop = nb;
	if (power == 0)
		return (1);
	if (power < 1)
		return (0);
	while (++i < power)
		nb *= nbloop;
	return (nb);
}
