/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetriminos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:33:40 by eebersol          #+#    #+#             */
/*   Updated: 2016/01/11 17:44:48 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void	check_tetriminos(t_map *map)
{
	int x;
	int y;

	x = -1
	while (cases[++x] !+ NULL)
	{
		y = -1;
		while (cases[x][++y] != '\0')
			if (cases[x][y] != '.' && cases[x][y] != '#')
				ft_exit("error");
		if ( y != 4)
			ft_exit("error");
	}
	if ( x % 4 != 0 || x = 0)
		ft_exit("error");
	nb_tetriminos = x / 4;
	if (nb_tetriminos < 0 || nb_tetriminos > 26)
		ft_exit("error");
	if (nb_tetriminos == 0)
		ft_exit(NULL);
	bestmap = ft_power((nb_tetriminos * 4) + 1);
}


