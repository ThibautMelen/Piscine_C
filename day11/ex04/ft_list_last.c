/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 12:14:22 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 12:29:54 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*actual_list;

	actual_list = begin_list;
	if (!(begin_list))
		return (0);
	while (actual_list->next)
		actual_list = actual_list->next;
	return (actual_list);
}
