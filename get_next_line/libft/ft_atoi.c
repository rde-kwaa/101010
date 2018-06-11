/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 12:26:23 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/05/15 12:48:54 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *s1)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 0;
	num = 0;
	while ((s1[i] == ' ') || (s1[i] == '\t') || (s1[i] == '\n')
		|| (s1[i] == '\v') || (s1[i] == '\f') || (s1[i] == '\r'))
		i++;
	neg = ft_charneg(s1[i]);
	if ((s1[i] == 45) || (s1[i] == 43))
		i++;
	while ((s1[i] >= 48) && (s1[i] <= 57))
	{
		num *= 10;
		num += ((int)s1[i] - 48);
		i++;
	}
	if (neg)
		return (-num);
	else
		return (num);
}