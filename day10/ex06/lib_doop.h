/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_doop.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:50:46 by thmelen           #+#    #+#             */
/*   Updated: 2018/03/01 16:12:56 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_DOOP_H
# define LIB_DOOP_H

# include <unistd.h>

void	do_op(char *str, int (*ft_op[5])(int, int), int nb1, int nb2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_plus(int v1, int v2);
int		ft_moins(int v1, int v2);
int		ft_mul(int v1, int v2);
int		ft_div(int v1, int v2);
int		ft_mod(int v1, int v2);

#endif
