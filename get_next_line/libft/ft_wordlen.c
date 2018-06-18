/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:53:56 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/07 11:54:08 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_wordlen(char const *s, size_t i, size_t len, char c)
{
	len = 0;
	while (s[i + len] && (s[i + len] != c))
		len++;
	return (len);
}
