/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:36:20 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/01 19:37:48 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while ((*(unsigned char*)s1++ == *(unsigned char*)s2++) && (i < (int)n))
	{
		if (*(unsigned char*)s1 == '\0' && *(unsigned char*)s2 == '\0')
			return (0);
		i++;
	}
	if (i == (int)n)
		return (0);
	return (*(unsigned char*)--s1 - *(unsigned char*)--s2);
}
