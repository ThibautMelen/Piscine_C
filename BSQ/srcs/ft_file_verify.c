/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_verify.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:07:47 by dchampag          #+#    #+#             */
/*   Updated: 2018/02/28 23:32:44 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_verify.h"
#include "lib_bsq.h"

char	*ft_get_map_from_file(char *file_name)
{
	char	*str;
	int		file;
	int		n;

	str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	str[1] = '\0';
	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (0);
	n = 0;
	while (read(file, str, BUFFER_SIZE))
	{
		if (str[0] < 32)
			return (NULL);
		n += BUFFER_SIZE;
	}
	close(file);
	free(str);
	str = malloc(sizeof(char) * n + 1);
	str[n] = '\0';
	file = open(file_name, O_RDONLY);
	read(file, str, n);
	close(file);
	return (str);
}

char	*ft_realloc(char *buff, char *full, int len)
{
	char	*new;
	int		i;
	int		j;

	j = 0;
	i = 0;
	new = (char *)malloc((custom_strlen(full) + len + 1) * sizeof(char));
	while (full != NULL && full[i] != '\0')
	{
		new[i] = full[i];
		i++;
	}
	free(full);
	while (j < len)
	{
		new[i] = buff[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

void	ft_end_string(char *str, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
}

char	*ft_get_map_from_terminal(void)
{
	char	*str;
	int		len;
	char	buff[BUFFER_SIZE];
	int		fd;

	str = NULL;
	ft_end_string(buff, BUFFER_SIZE);
	fd = 0;
	len = BUFFER_SIZE;
	while ((read(fd, buff, BUFFER_SIZE)))
	{
		buff[len] = 0;
		str = ft_realloc(buff, str, len);
		ft_end_string(buff, BUFFER_SIZE);
	}
	close(fd);
	return (str);
}

char	*ft_verify_input(int ac, char *av, int i)
{
	char	*map;

	if (ac == 1)
	{
		if (!(map = ft_get_map_from_terminal()))
			ft_map_error();
	}
	else if (!(map = ft_get_map_from_file(av)))
	{
		ft_map_error();
		if (i < (ac - 1))
			ft_putchar('\n');
	}
	if (map)
	{
		if (!(ft_verify_map(map)))
		{
			ft_map_error();
			if (i < (ac - 1))
				ft_putchar('\n');
			return (NULL);
		}
	}
	return (map);
}
