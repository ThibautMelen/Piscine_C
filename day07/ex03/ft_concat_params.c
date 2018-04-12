/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 19:37:47 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/21 19:29:42 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\n';
	dest[len + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*dest;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]) + 1;
		i++;
	}
	if (!(dest = malloc(sizeof(dest) * len) + 1))
		return (NULL);
	i = 1;
	while (i < argc)
	{
		ft_strcat(dest, argv[i]);
		i++;
	}
	dest[len - 1] = '\0';
	return (dest);
}
