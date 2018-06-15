/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:17:54 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/11 17:39:54 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int		end(char *buf)
{
	int i;

	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		return (1);
	return (0);
}

int		get_line(const int fd, char *buf, char *strs[fd])
{
	int 	rn;
	char	*tmp;

	while (((rn = read(fd, buf, BUFF_SIZE)) > 0) && (end(buf) != 1))
	{
		buf[rn] = '\0';
		tmp = strs[fd];
		strs[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	//free up buffer here
	if (rn < 0)
		return (-1);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int 		rn;
	static char	*strs[2147483647];
	char		buf[BUFF_SIZE + 1];
	char		*str;
	char		*tmp;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if (!(strs[fd]))
		strs[fd] = ft_strnew(0);
	if ((rn = get_line(fd, buf, strs)) == -1)
		return (-1);
	if (( str = ft_strchr(strs[fd], '\n')))
	{
		*line = ft_strsub(strs[fd], 0, str - strs[fd]);
		tmp = strs[fd];
		strs[fd] = ft_strdup(str + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strdup(strs[fd]);
	ft_strdel(&strs[fd]);
	if (ft_strlen(*line) > 0)
		return (1);
	return (0);
}
