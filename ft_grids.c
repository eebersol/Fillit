/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grids.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 19:42:20 by eebersol          #+#    #+#             */
/*   Updated: 2016/01/11 19:57:11 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_grid(char *grid)
{
	write(1, grid, ft_strlen(grid));
}

int		ft_mini_square(int tetriminos_nb)
{
	int len_side;

	len_side = 2;
	while ((tetriminos_nb * 4) > (len_side * len_side))
		len_side++;
	return (len_side);
}

int		ft_size_side(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

void	ft_set_grid(char *grid, int size)
{
	int i;

	i = 0;
	while (i < (size * size) + size)
	{
		grid[i] = '.';
		if (i > 0 && (i + 1) % (size + 1) == 0)
			grid[i] = '\n';
		i++;
	}
}

void		ft_reset_grid(char *grid, char *t_cases, int i, int j)
{
	while (grid[i])
	{
		if (grid[i] == ('A' + j))
			grid[i] = '.';
		i++;
	}
	i = 0;
	while (t_cases[i])
	{
		if (t_cases[i] == ('A' + j))
			t_cases[i] += 32;
		i++;
	}
}
