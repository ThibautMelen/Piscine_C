/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_eval_expr.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:24:44 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/25 19:31:57 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_EVAL_EXPR_H
# define LIB_EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi_revenge(char **str);
int		plus(int nb1, int nb2);
int		moins(int nb1, int nb2);
int		mult(int nb1, int nb2);
int		divion(int nb1, int nb2);
int		mod(int nb1, int nb2);
int		eval_expr(char *str);
int		ft_len_parse(char *str);
char	*ft_strcpy_parse(char *str_parse, char *str);
char	*ft_parse_dup(char *str);
int		ft_calculator(int nb1, char operator, int nb2);
int		ft_expr_atom(char **str);
int		ft_expr_factors(char **str);
int		ft_expr_sum(char **str);

#endif
