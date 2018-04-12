/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:47:18 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/19 18:22:46 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int		t_bool;
# define EVEN(nb) (nb % 2)
# define EVEN_MSG "I have an odd number of arguments.\n"
# define ODD_MSG "I have an even number of arguments.\n"
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

#endif
