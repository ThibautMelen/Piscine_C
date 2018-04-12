/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_verify.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:13:37 by dchampag          #+#    #+#             */
/*   Updated: 2018/02/28 23:42:55 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_VERIFY_H
# define FILE_VERIFY_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define BUFFER_SIZE 4096

char	*ft_verify_input(int ac, char *av, int i);
char	*ft_strcpy(char *dest, char *src);
int		ft_verify_map(char *str);
void	ft_map_error(void);
void	ft_bsq_resolver_one_car(int **tab, char*map,
		int nb_lign, int nb_col);
void	ft_bsq_resolver_one_col(int **tab, char *map,
		int nb_lign, int nb_col);
void	ft_bsq_resolver_one_lign(int **tab, char *map,
		int nb_lign, int nb_col);
void	ft_bsq_resolver_one_sqr(int **tab, char *map,
		int nb_lign, int nb_col);
void	ft_bsq_resolver_one_sqr32(int **tab, char *map,
		int nb_lign, int nb_col);

int		custom_strlen(char *str);

#endif
