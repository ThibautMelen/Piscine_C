/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:09:26 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/20 18:44:02 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <unistd.h>
# include <stdlib.h>

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_len_words(char *str, int *start, int *end);
int					ft_count_words(char *str);
char				*ft_strdup_revenge(char *str, int start, int end);
char				**ft_split_whitespaces(char *str);
int					ft_strlen(char *str);
char				*ft_strdup(char *str);
void				ft_putstr(char *str);
void				ft_show_tab(struct s_stock_par *par);
void				ft_putchar(char c);

typedef struct		s_stock_par
{
	int				size_param;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;

#endif
