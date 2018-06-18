/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:17:58 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/04 16:28:51 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*ret;

	i = 0;
	if (!s || !f)
		return (NULL);
	ret = ft_strnew(ft_strlen(s));
	if (!ret)
		return (NULL);
	while (*s)
		ret[i++] = f(*s++);
	return (ret);
}
