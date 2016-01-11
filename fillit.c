/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 19:57:50 by eebersol          #+#    #+#             */
/*   Updated: 2016/01/11 20:03:45 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit(char *file)
{
	char *file_content;
	char **t_cases;
	int	i;
	int	j;

	i = 20;
	j = 0;
	file_content = ft_read(file);
	t_cases = (char**)malloc(sizeof(char *) * 27);
	while (file_content[++i] != '\0')
	{
		of (i % 21 == 0)
		{
			t_cases[j] = ft_strdup(ft_tetriminos_verif(ft_strsub(
							file_content, i - 21, 20), j));
			j++
		}
	}
	if (file_content[i] == '\0')
		t_cases[j] = ft_strdup(ft_tetriminos_verif(ft_strsub(
						file_content, i - 21, 20), j));
	t_cases[j + 1] = NULL;
	free(file_content);
//	ft_algo(t_cases);
//	ft_free_tbl_s(t_cases);
}
