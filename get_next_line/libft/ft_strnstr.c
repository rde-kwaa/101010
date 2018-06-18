/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 19:55:46 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/05/28 19:10:05 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		len;

	if (*s2 == '\0')
		return ((char*)s1);
	len = ft_strlen((char*)s2);
	i = 0;
	while (s1[i] != '\0' && (i + len) <= n)
	{
		if (ft_strncmp((char*)s1 + i, (char*)s2, len) == 0)
			return ((char*)s1 + i);
		i++;
	}
	return (NULL);
}
