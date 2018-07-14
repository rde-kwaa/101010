/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:16:20 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/07 17:16:22 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_cscat(char c, char *s1)
{
	int		i;
	int		size;
	char	*s;

	size = 1;
	i = 0;
	while (s1[i++] != '\0')
		size++;
	s = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	s[i++] = c;
	while (*s1 != '\0')
	{
		s[i++] = *s1++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_ccscat(char c1, char c2, char *s1)
{
	int		i;
	int		size;
	char	*s;

	size = 2;
	i = 0;
	while (s1[i++] != '\0')
		size++;
	s = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	s[i++] = c1;
	s[i++] = c2;
	while (*s1 != '\0')
	{
		s[i++] = *s1++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_cccscat(char c1, char c2, char c3, char *s1)
{
	int		i;
	int		size;
	char	*s;

	size = 3;
	i = 0;
	while (s1[i++] != '\0')
		size++;
	s = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	s[i++] = c1;
	s[i++] = c2;
	s[i++] = c3;
	while (*s1 != '\0')
	{
		s[i++] = *s1++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_ccccscat(char c1, char c2, char c3, char c4, char *s1)
{
	int		i;
	int		size;
	char	*s;

	size = 4;
	i = 0;
	while (s1[i++] != '\0')
		size++;
	s = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	s[i++] = c1;
	s[i++] = c2;
	s[i++] = c3;
	s[i++] = c4;
	while (*s1 != '\0')
	{
		s[i++] = *s1++;
	}
	s[i] = '\0';
	return (s);
}

char	*moment(unsigned int duration)
{
	unsigned int	d;
	char			*ret;

	d = duration;
	if (d < 60)
	{
		if	(!(ret = (char *)malloc(sizeof(char) * (15 + 1))))
			return NULL;
		if (d == 1)
			ret = "1 second ago.";
		else if (d < 10)
		{ 
			ret = ft_cscat(d + 48, " seconds ago.");
		}
		else if (d < 60)
		{
			ret = ft_ccscat(((d/10)+48), ((d%10)+48), " seconds ago.");
		}
		return (ret);
	}
	else if (d < 3600)
	{
		d = d/60;
		if	(!(ret = (char *)malloc(sizeof(char) * (15 + 1))))
			return NULL;
		if (d == 1)
			ret = "1 minute ago.";
		else if (d < 10)
		{ 
			ret = ft_cscat(d + 48, " minutes ago.");
		}
		else if (d < 60)
		{
			ret = ft_ccscat(((d/10)+48), ((d%10)+48), " minutes ago.");
		}
		return (ret);
	}
	else if (d < 86400)
	{
		d = d/3600;
		if	(!(ret = (char *)malloc(sizeof(char) * (13 + 1))))
			return NULL;
		if (d == 1)
			ret = "1 hour ago.";
		else if (d < 10)
		{ 
			ret = ft_cscat(d + 48, " hours ago.");
		}
		else if (d < 24)
		{
			ret = ft_ccscat(((d/10)+48), ((d%10)+48), " hours ago.");
		}
		return (ret);
	}
	else if (d < 2592000)
	{
		d = d/86400;
		if	(!(ret = (char *)malloc(sizeof(char) * (12 + 1))))
			return NULL;
		if (d == 1)
			ret = "1 day ago.";
		else if (d < 10)
		{ 
			ret = ft_cscat(d + 48, " days ago.");
		}
		else if (d < 30)
		{
			ret = ft_ccscat(((d/10)+48), ((d%10)+48), " days ago.");
		}
		return (ret);
	}
	else if (d <= 4294967295)
	{
		d = d/2592000;
		if	(!(ret = (char *)malloc(sizeof(char) * (18 + 1))))
			return NULL;
		if (d == 1)
			ret = "1 month ago.";
		else if (d < 10)
			ret = ft_cscat(d + 48, " months ago.");
		else if (d < 100)
			ret = ft_ccscat(((d/10)+48), ((d%10)+48), " months ago.");
		else if (d < 1000)
			ret = ft_cccscat(((d/100)+48), (((d%100)/10)+48), \
					((d%10)+48), " months ago.");
		else if (d < 1700)
			ret = ft_ccccscat(((1)+48), (((d%1000)/100)+48), \
					(((d%100)/10)+48), ((d%10)+48), " months ago.");
		return (ret);
	}
	return NULL;
}
