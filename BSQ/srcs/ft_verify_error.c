/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:08:01 by dchampag          #+#    #+#             */
/*   Updated: 2018/02/28 16:34:02 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_verify.h"
#include "lib_bsq.h"

int		ft_verify_param(char *map)
{
	int i;
	int count;
	int len;

	i = 0;
	count = 0;
	len = 0;
	while (map[i] != '\n' && map[i])
	{
		len++;
		i++;
	}
	i = 0;
	if (len <= 3)
		return (0);
	while (i < (len - 3))
	{
		if (map[i] < '0' || map[i] > '9')
			return (0);
		i++;
	}
	if (map[len - 3] == map[len - 2] || map[len - 3] == map[len - 1]
			|| map[len - 2] == map[len - 1])
		return (0);
	return (len);
}

int		ft_verify_nbline(char *map, int start)
{
	int i;
	int res;
	int nb_line;

	i = 0;
	res = 0;
	nb_line = 0;
	while (i < (start - 3) && map[i])
	{
		res = (res * 10) + (map[i] - '0');
		i++;
	}
	i = start + 1;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
			nb_line++;
		i++;
	}
	if (nb_line != res)
		return (0);
	return (i);
}

int		ft_verify_nbchar(char *map, int start)
{
	int i;
	int nb_char;
	int compare_nb_char;

	i = start + 1;
	nb_char = 0;
	while (map[i] != '\n' && map[i] != '\0')
	{
		nb_char++;
		i++;
	}
	if (!(nb_char))
		return (0);
	i++;
	while (map[i] != '\0')
	{
		compare_nb_char = 0;
		while (map[i++] != '\n')
		{
			compare_nb_char++;
		}
		if (compare_nb_char != nb_char)
			return (0);
	}
	return (1);
}

int		ft_verify_char(char *map, int end)
{
	int i;
	int bool;
	int start;

	i = end + 1;
	while (map[i])
	{
		bool = 0;
		start = end - 3;
		while (start <= (end - 1) && bool == 0)
		{
			if (map[start] == map[i] || map[i] == '\n')
				bool = 1;
			if (map[i] == map[end - 1])
				return (0);
			start++;
		}
		if (bool == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_verify_map(char *map)
{
	int start;

	if ((start = ft_verify_param(map)))
	{
		if (ft_verify_nbline(map, start))
		{
			if (ft_verify_nbchar(map, start))
			{
				if (ft_verify_char(map, start))
				{
					return (1);
				}
			}
		}
	}
	return (0);
}
