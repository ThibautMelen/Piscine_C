/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:10:28 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 15:16:25 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *pred;
	t_list *actualy;

	actualy = *begin_list;
	while (actualy && !cmp(actualy->data, data_ref))
	{
		*begin_list = actualy->next;
		free(actualy);
		actualy = *begin_list;
	}
	while (actualy)
	{
		if (!cmp(actualy->data, data_ref))
		{
			pred->next = actualy->next;
			free(actualy);
			actualy = pred->next;
		}
		else
		{
			pred = actualy;
			actualy = actualy->next;
		}
	}
}
