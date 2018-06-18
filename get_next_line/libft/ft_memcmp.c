/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:42:43 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/04 12:12:20 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char	*v1;
	unsigned char	*v2;

	v1 = (unsigned char*)s1;
	v2 = (unsigned char*)s2;
	if (v1 == v2)
		return (0);
	while (n--)
	{
		if (*v1 != *v2)
			return (*v1 - *v2);
		v1++;
		v2++;
	}
	return (0);
}
