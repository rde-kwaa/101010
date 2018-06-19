/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:17:54 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/16 16:55:13 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
// this function finds any newline that may be in the buffer.
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
	int			rn;
	char		*tmp;
// while loop happens while there is no newline, and while it can read from fd
	while ((end(buf) != 1) && ((rn = read(fd, buf, BUFF_SIZE)) > 0))
	{
		// null terminates for string manipulation (eg, ft_strjoin)
		buf[rn] = '\0';
		//read into tmp str (first time this runs the tmp will be empty as strs (static var) is empty
		tmp = strs[fd];
		// joins tmp and buf into the global var
		strs[fd] = ft_strjoin(tmp, buf);
		// frees up tmp
		ft_strdel(&tmp);
	}
	// frees up buf
	ft_strdel(&buf);
	if (rn < 0)
		return (-1);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int			rn;
	static char	*strs[2147483647];
	char		*buf;
	char		*str;
	char		*tmp;
// error checking
	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	buf = ft_strnew(BUFF_SIZE);
	// checks if static var is initialised, if not, creates new one.
	if (!strs[fd])
		strs[fd] = ft_strnew(0);
// runs get_line function and sees if it fails
	if ((rn = get_line(fd, buf, strs)) == -1)
		return (-1);
	// after \n is found, find the delimiter ('\n') and puts everything from delim. and after into str
	if ((str = ft_strchr(strs[fd], '\n')))
	{
		// sub string of strs[fd] from the beginning to before the newline
		*line = ft_strsub(strs[fd], 0, str - strs[fd]);
		tmp = strs[fd];
		// allocates memory for everything after the newline
		strs[fd] = ft_strdup(str + 1);
		// frees tmp
		ft_strdel(&tmp);
		return (1);
	}
	// after eveything is finished, puts whatever is left into the line
	*line = ft_strdup(strs[fd]);
	ft_strdel(&strs[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
