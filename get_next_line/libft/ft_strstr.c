/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 11:57:23 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/07 17:13:47 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	int i;
	int j;

	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] == s1[i + j])
		{
			if (s2[j + 1] == '\0')
				return ((char*)s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
