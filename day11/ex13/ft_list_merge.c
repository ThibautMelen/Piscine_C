/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:08:46 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 15:40:36 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list != NULL && nbr - 1)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	if (!nbr - 1)
		return (begin_list);
	return (0);
}

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	int		size;
	t_list	*last_list;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	size = ft_list_size(*begin_list1);
	last_list = ft_list_at(*begin_list1, size);
	last_list->next = begin_list2;
}
