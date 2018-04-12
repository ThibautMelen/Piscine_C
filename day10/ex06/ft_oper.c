/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:42:42 by thmelen           #+#    #+#             */
/*   Updated: 2018/03/01 16:12:51 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_doop.h"

int		plus(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int		moins(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int		mult(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int		div(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int		mod(int nb1, int nb2)
{
	return (nb1 % nb2);
}
