/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:13:47 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 12:19:40 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*actuel_list;

	actuel_list = *begin_list;
	if (!begin_list || !(*begin_list))
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (actuel_list->next)
		actuel_list = actuel_list->next;
	actuel_list->next = ft_create_elem(data);
}
