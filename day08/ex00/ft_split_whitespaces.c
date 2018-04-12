/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 12:37:59 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/21 20:44:54 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_len_words(char *str, int *start, int *end)
{
	while (str[*start] == ' ' || str[*start] == '\t' || str[*start] == '\n')
		(*start)++;
	*end = *start + 1;
	while ((str[*end] != ' ' && str[*end] != '\t' &&
	str[*end] != '\n' && str[*end] != '\0'))
		(*end)++;
}

int		ft_count_words(char *str)
{
	int		i;
	int		nbw;

	i = 0;
	nbw = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') &&
		(str[i + 1] == ' ' || str[i + 1] == '\t' ||
		str[i + 1] == '\n' || str[i + 1] == '\0'))
			nbw++;
		i++;
	}
	return (nbw);
}

char	*ft_strdup_revenge(char *str, int start, int end)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	if (!(dest = malloc(sizeof(dest) * (end - start))))
		return (0);
	while (i < start)
		i++;
	while (i < end)
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		nbw;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = 0;
	nbw = ft_count_words(str);
	if (!(words = malloc(sizeof(words) * nbw + 1)))
		return (NULL);
	while (i < nbw)
	{
		ft_len_words(str, &start, &end);
		words[i] = ft_strdup_revenge(str, start, end);
		start = end;
		i++;
	}
	words[i] = NULL;
	return (words);
}
