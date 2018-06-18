/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 15:16:59 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/16 18:17:10 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100

# include "libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# include <sys/stat.h>
# include <sys/types.h>

int		get_next_line(const int fd, char **line);
int		get_line(const int fd, char *buf, char *strs[fd]);

#endif
