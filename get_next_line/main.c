/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 15:10:03 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/11 17:30:35 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"

int		main(void)
{
	int 	fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	ft_putnbr(fd);
	ft_putchar('\n');
	if ( fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	get_next_line(fd, &line);
    ft_putnbr(fd);
    ft_putchar('\n');
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	close(fd);
	return (0);
}
