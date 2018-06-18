/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 15:10:03 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/16 17:38:00 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
	}
	close(fd);
	return (0);
}
