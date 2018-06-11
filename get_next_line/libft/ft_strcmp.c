/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:18:49 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/01 19:39:48 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char const *s1, char const *s2)
{
	while (*s1++ == *s2++)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	}
	return (*(unsigned char*)--s1 - *(unsigned char*)--s2);
}
