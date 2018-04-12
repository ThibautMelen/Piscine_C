/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 22:46:20 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/22 23:44:18 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_charset(char *str, char letter)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == letter)
			return (1);
		i++;
	}
	return (0);
}

void	ft_len_words(char *str, int *start, int *end, char *charset)
{
	int i;

	i = 0;
	while (ft_charset(charset, str[*start]))
		(*start)++;
	*end = *start + 1;
	while (!(ft_charset(charset, str[*end])) && str[*end] != '\0')
		(*end)++;
}

int		ft_count_words(char *str, char *charset)
{
	int		i;
	int		nbw;

	i = 0;
	nbw = 0;
	while (ft_charset(charset, str[i]))
		i++;
	while (str[i])
	{
		if (!(ft_charset(charset, str[i])) &&
				(ft_charset(charset, str[i + 1]) || str[i + 1] == '\0'))
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

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		nbw;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = 0;
	nbw = ft_count_words(str, charset);
	if (!(words = malloc(sizeof(words) * nbw + 1)))
		return (NULL);
	while (i < nbw)
	{
		ft_len_words(str, &start, &end, charset);
		words[i] = ft_strdup_revenge(str, start, end);
		start = end;
		i++;
	}
	words[i] = NULL;
	return (words);
}
