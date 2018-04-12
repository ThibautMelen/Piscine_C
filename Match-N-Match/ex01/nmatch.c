/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 20:11:08 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/18 20:53:11 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (s1[0] == '\0' && s1[0] == s2[0])
		return (1);
	else if (s1[0] && s2[0] == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	else if (s1[0] == '*' && s1[1] == s2[1] && s1[0] == s2[0])
		return (nmatch(s1 + 1, s2 + 1));
	else if (s1[0] == '\0' && s2[0] == '*')
		return (nmatch(s1, s2 + 1));
	else if (s1[0] == s2[0] && s1[0] && s2[0])
		return (nmatch(s1 + 1, s2 + 1));
	else if (s1[0] && s2[0] && s1[0] == s2[0] && s1[0] != '*')
		return (nmatch(s1 + 1, s2 + 1));
	else if (s1[0] == '\0' && s2[0] == '*')
		return (nmatch(s1, s2 + 1));
	else if (s2[0] == '*' && s1[0] == s2[1])
		return (nmatch(s1, s2 + 1));
	return (0);
}
