/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 19:33:50 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/01 21:36:06 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*ret;
	unsigned int	start;
	size_t			len;

	if (!s)
		return (0);
	start = 0;
	while (ft_wspace(s[start]))
	{
		if (s[start + 1] == '\0')
			return (ft_strdup(""));
		start++;
	}
	len = ft_strlen(s) - 1;
	while (ft_wspace(s[len]))
		len--;
	if (len < start)
		return (ret = ft_strdup(""));
	ret = ft_strsub(s, start, len - (size_t)start + 1);
	return (ret);
}
