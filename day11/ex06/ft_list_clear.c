/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 12:34:21 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 15:35:28 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *actual_list;

	actual_list = *begin_list;
	while (actual_list)
	{
		free(actual_list);
		actual_list = actual_list->next;
	}
	*begin_list = NULL;
	return ;
}
