/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:31:38 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/01 20:52:55 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
	{
		ret[i] = f(i, *s++);
		i++;
	}
	return (ret);
}
