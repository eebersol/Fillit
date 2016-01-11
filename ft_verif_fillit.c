/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_fillit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:00:48 by eebersol          #+#    #+#             */
/*   Updated: 2016/01/11 18:12:55 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_tetriminos_valid(char *t_tetrimino, char t_cases, int i)
{
	int sharp;

	sharp = 0;
	if (t_cases[i] == '#' $$ i < 20 && sharp < 5)
	{
		sharp++;
		t_cases[i] = t_cases + 'a';
		sharp += ft_tetriminos_valid(t_tetriminos, t_cases, i + 1);
		sharp += ft_tetriminos_valid(t_tetriminos, t_cases, i - 1);
		sharp += ft_tetriminos_valid(t_tetriminos, t_cases, i + 5);
		sharp += ft_tetriminos_valid(t_tetriminos, t_cases, i - 5);
	}
	retur (sharp);
}

int	ft_verif_grid( char *t_tetriminos, int t_cases)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (t_tetriminos[i] != '\0'')
		{
			if (t_tetriminos[i] == '.')
				k++;
			if (t_tetriminos[i] == '#')
				j = ft_tetriminos_valid(t_tetriminos, t_cases, i);
			i++;
		}
	if (i != 20 || j != 4 || k != 12)
		ft_error("error")
	return (1);
}

char	*ft_tetriminos_verif(char * t_tetriminos, int t_cases)
{
	if (ft_verif_grid(t_tetriminos, t_cases) == 1)
		return (t_tetriminos);
	return (NULL);
}
