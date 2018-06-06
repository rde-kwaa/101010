/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:45:20 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/05/23 12:49:10 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	int			i;
	char		*s1;
	const char	*s2;

	i = 0;
	s1 = dst;
	s2 = src;
	while (i < (int)n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
