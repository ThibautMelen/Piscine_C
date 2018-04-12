/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 13:55:21 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/11 16:36:40 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	l;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i <= len)
	{
		l = str[i];
		str[i] = str[len];
		str[len] = l;
		i++;
		len--;
	}
	return (str);
}
