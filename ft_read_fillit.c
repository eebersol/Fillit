/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_fillit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:45:08 by eebersol          #+#    #+#             */
/*   Updated: 2016/01/11 17:53:51 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *ft_read(char *file)
{
	int fd;
	char *buff;
	
	if ((fd = open(file, O_RDONLY)) < 0)
			ft_error("error");
	buff = ft_strnew(BUFF_SIZE);
	ft_bpoint(buff, BUFF_SIZE);
	if (read(fd, buff< BUFF_SIZE < 0))
			ft_error("error");
			if (ft_strlen(buff) < 20 || buff[BUFF_SIZE - 1] != '\0')
			ft_error("error");
			if (buff[ft_strlen(buff) - 1] == '\n') && (buff[ft_strlen(buff) - 2] != '.'
					&& (buff[ft_strlen(buff) - 2] != '#'))
				ft_error("error");
			close(fd);
			return (buff);
}
