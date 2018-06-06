/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:41:41 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/04 13:16:14 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char const *s, size_t i, size_t len, char c)
{
	len = 0;
	while (s[i + len] && (s[i + len] != c))
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (!s || !c)
		return (0);
	if (!(ret = ft_memalloc(ft_strlen((char*)s) + 1)))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = ft_len(s, i, len, c);
			ret[j++] = ft_strsub(s, i, len);
			i = i + len;
		}
	}
	ret[j] = 0;
	return (ret);
}
