/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:09:25 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/28 15:09:28 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous;
	t_list *current;
	t_list *next;

	previous = NULL;
	next = *begin_list;
	while (next)
	{
		current = next;
		next = next->next;
		current->next = previous;
		previous = current;
	}
	*begin_list = current;
}
