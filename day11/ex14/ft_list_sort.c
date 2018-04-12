/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:24:06 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 15:25:21 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(void **l1, void **l2)
{
	char *tmp;

	tmp = *l1;
	*l1 = *l2;
	*l2 = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*base;

	while (begin_list)
	{
		base = *begin_list;
		while (base->next)
		{
			if ((*cmp)(base->data, base->next->data) > 0)
				ft_swap(&base->data, &base->next->data);
			base = base->next;
		}
	}
}
