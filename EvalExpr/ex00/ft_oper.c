/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:26:33 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/24 14:26:36 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_eval_expr.h"

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

int		divion(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int		mod(int nb1, int nb2)
{
	return (nb1 % nb2);
}
