/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 17:52:59 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/07 18:29:24 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_print_comb_put(char a, char b, char c, char d)
{
	while (d <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		d++;
	}
	return (d);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		c = a;
		while (b <= '9')
		{
			d = b + 1;
			while (c <= '9')
			{
				ft_print_comb_put(a, b, c, d);
				d = '0';
				c++;
			}
			c = a;
			b++;
		}
		b = '0';
		a++;
	}
}
