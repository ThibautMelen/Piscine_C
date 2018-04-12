/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:34:45 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/27 14:37:49 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list && nbr)
	{
		if (nbr == 0)
			return (begin_list);
		begin_list = begin_list->next;
		nbr--;
	}
	if (nbr == 0)
		return (begin_list);
	return (0);
}
