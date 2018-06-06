/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:44:32 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/01 14:14:07 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, char *src)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (dst[size] != '\0')
		size++;
	while (src[i] != '\0')
	{
		dst[size + i] = src[i];
		i++;
	}
	dst[size + i] = '\0';
	return (dst);
}
