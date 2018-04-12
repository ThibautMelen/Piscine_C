/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_bsq.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:12:30 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/28 23:35:49 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_BSQ_H
# define LIB_BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int		ft_atoi(char *str);

char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src, int ret);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);

int		ft_count_lign(char *str);
int		ft_count_col(char *str);
int		*ft_intdup_last(int nb_col, int *index_str);
int		*ft_intdup_line(char *str, int nb_col, int *index_str);
int		**ft_parse_int(char *str);

void	ft_i_gotta_filling(int **tab, int best_sqr, int i_col, int j_lign);
int		ft_filling_sqr(int **tab, int best_sqr, int nb_lign, int nb_col);
int		ft_get_best_sqr(int **tab, int nb_lign, int nb_col);
int		ft_bsq_get_min(int **tab, int nb_lign, int nb_col);
void	ft_bsq_resolver(int **tab, int nb_lign, int nb_col);

void	ft_bsq_print(int **tab, char *str, int nb_lign, int nb_col);

void	ft_show_tab(int **tab, int nb_lign, int nb_col);

# define SQUARE -92
# define CAR_VIDE str[ft_get_skip_head(str) - 3]
# define CAR_OBSTACLE str[ft_get_skip_head(str) - 2]
# define CAR_PLEIN str[ft_get_skip_head(str) - 1]

#endif
