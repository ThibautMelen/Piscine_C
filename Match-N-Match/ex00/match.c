/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 04:23:20 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/18 20:10:19 by thmelen          ###   ########.fr       */
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

int		match(char *s1, char *s2)
{
	if (s1[0] == '\0' && s1[0] == s2[0])
		return (1);
	else if (s2[0] == '*' && s2[1] == '*')
		return (match(s1, s2 + 1));
	else if (s1[0] && s2[0] && s1[0] == s2[0] && s1[0] != '*')
		return (match(s1 + 1, s2 + 1));
	else if (s1[0] == '\0' && s2[0] == '*')
		return (match(s1, s2 + 1));
	else if (s2[0] == '*' && s1[0] == s2[1])
		return (match(s1, s2 + 1));
	else if (s1[0] != '\0' && s2[0] == '*')
	{
		if (s1[0 + 1] == '\0')
			return (match((s1 - ft_strlen(s2) + 2), s2 + 1));
		else
			return (match(s1 + 1, s2));
	}
	else if (s1[0] == '*' && s1[1] == s2[1] && s1[0] == s2[0])
		return (match(s1 + 1, s2 + 1));
	return (0);
}
