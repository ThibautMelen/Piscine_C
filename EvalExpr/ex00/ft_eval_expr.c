/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:35:13 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/25 15:21:34 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_eval_expr.h"

int		ft_expr_atom(char **str)
{
	int nb1;

	if (**str == '(')
	{
		(*str)++;
		nb1 = ft_expr_sum(str);
		if (**str == ')')
			(*str)++;
		return (nb1);
	}
	return (ft_atoi_revenge(str));
}

int		ft_expr_factors(char **str)
{
	int		nb1;
	int		nb2;
	char	oper;

	nb1 = ft_expr_atom(str);
	while (1 == 1)
	{
		oper = **str;
		if (oper != '*' && oper != '/' && oper != '%')
			return (nb1);
		(*str)++;
		nb2 = ft_expr_atom(str);
		if (oper == '*' || oper == '/' || oper == '%')
			nb1 = ft_calculator(nb1, oper, nb2);
	}
	return (nb1);
}

int		ft_expr_sum(char **str)
{
	int		nb1;
	int		nb2;
	char	oper;

	nb1 = ft_expr_factors(str);
	while (1 == 1)
	{
		oper = **str;
		if (oper != '+' && oper != '-')
			return (nb1);
		(*str)++;
		nb2 = ft_expr_factors(str);
		if (oper == '+' || oper == '-')
			nb1 = ft_calculator(nb1, oper, nb2);
	}
	return (nb1);
}

int		eval_expr(char *str)
{
	char	*expres;
	int		nb_res;

	expres = ft_parse_dup(str);
	nb_res = ft_expr_sum(&expres);
	return (nb_res);
}
