/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expr_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:34:41 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/24 23:50:21 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_eval_expr.h"

int		ft_len_parse(char *str)
{
	int i;
	int len_parse;

	i = 0;
	len_parse = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '+' || str[i] == '-'
				|| str[i] == '*' || str[i] == '/' || str[i] == '%'
				|| str[i] == '(' || str[i] == ')')
			len_parse++;
		i++;
	}
	return (len_parse);
}

char	*ft_strcpy_parse(char *str_parse, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '+' || str[i] == '-'
				|| str[i] == '*' || str[i] == '/' || str[i] == '%'
				|| str[i] == '(' || str[i] == ')')
		{
			str_parse[j] = str[i];
			j++;
		}
		i++;
	}
	str_parse[j] = '\0';
	return (str_parse);
}

char	*ft_parse_dup(char *str)
{
	int		i;
	char	*str_parse;

	i = 0;
	if (!(str_parse = malloc(sizeof(char) * ft_len_parse(str))))
		return (NULL);
	ft_strcpy_parse(str_parse, str);
	return (str_parse);
}
