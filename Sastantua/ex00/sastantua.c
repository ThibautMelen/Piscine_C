/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 11:31:26 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/10 22:44:55 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affiche_espace(int space)
{
	int i;

	i = 0;
	while (i < space)
	{
		ft_putchar(' ');
		i++;
	}
}

int		calcul_space(int size)
{
	int rajout_etage;
	int largeur_ligne;
	int index_etage;

	index_etage = 0;
	largeur_ligne = 0;
	rajout_etage = 4;
	while (index_etage < size)
	{
		largeur_ligne = largeur_ligne + 2 * (2 + index_etage);
		index_etage++;
		largeur_ligne = rajout_etage + largeur_ligne;
		if (index_etage % 2 != 0 && index_etage < size)
			rajout_etage = rajout_etage + 2;
	}
	return (largeur_ligne);
}

void	affiche_ligne(int largeur_ligne, int index_ligne,
		int index_etage, int size)
{
	int i;
	int pipe_porte;

	i = 1;
	pipe_porte = 1 + (2 * ((index_etage - 1) / 2));
	ft_putchar('/');
	while (i < largeur_ligne - 1)
	{
		if (i < (largeur_ligne + pipe_porte) / 2
		&& 2 + index_etage - index_ligne <= pipe_porte
		&& index_etage == size
		&& i >= (largeur_ligne - pipe_porte) / 2)
			if (i == (largeur_ligne + pipe_porte) / 2 - 2
			&& pipe_porte >= 5
			&& index_ligne == 2 + index_etage - pipe_porte / 2 - 1)
				ft_putchar('$');
			else
				ft_putchar('|');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar(92);
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int index_etage;
	int hauteur_etage;
	int largeur_ligne;
	int index_ligne;

	if (size < 1)
		return ;
	index_etage = 1;
	largeur_ligne = 1;
	index_ligne = 0;
	while (index_etage <= size)
	{
		hauteur_etage = 2 + index_etage;
		while (index_ligne < hauteur_etage)
		{
			largeur_ligne += 2;
			affiche_espace((calcul_space(size) - largeur_ligne) / 2);
			affiche_ligne(largeur_ligne, index_ligne, index_etage, size);
			index_ligne++;
		}
		index_ligne = 0;
		index_etage++;
		largeur_ligne = largeur_ligne + 4 + (2 * ((index_etage - 2) / 2));
	}
}
