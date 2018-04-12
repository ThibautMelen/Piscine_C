/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:51:53 by thmelen           #+#    #+#             */
/*   Updated: 2018/03/01 11:53:09 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*last_list;
	t_list	*actual_list;

	i = 0;
	last_list = NULL;
	while (i < ac && ac >= 1)
	{
		actual_list = ft_create_elem(av[i]);
		if (last_list)
			actual_list->next = last_list;
		last_list = actual_list;
		i++;
	}
	return (last_list);
}
