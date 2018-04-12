/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:48:25 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/13 15:28:27 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	i = 0;
	j = 0;
	len = 0;
	while (dest[i])
	{
		i++;
		len++;
	}
	while (src[j])
		j++;
	if (size < len)
		return (size + len);
	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (len + size);
}
