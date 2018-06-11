/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:52:56 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/04 14:37:11 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t n)
{
	size_t			i;
	unsigned char	*dtmp;
	unsigned char	*stmp;

	i = 0;
	dtmp = (unsigned char*)dst;
	stmp = (unsigned char*)src;
	if (stmp < dtmp)
		while (n-- > 0)
			dtmp[n] = stmp[n];
	else
		while (i < n)
		{
			dtmp[i] = stmp[i];
			i++;
		}
	return (dtmp);
}
