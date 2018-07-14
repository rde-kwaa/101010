/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:05:57 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/11 12:26:56 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ws(char c)
{
	if (c == ' ' || c == '	')
		return 1;
	else
		return 0;
}

void	rostring(char *s)
{
	int	i;
	int start;
	int	end;

	i = 0;
	while (s[i] && ws(s[i]))
		i++;
	start = i;
	while (s[i] && !ws(s[i]))
		i++;
	end = i;
	while (s[i])
	{
		while (s[i] && ws(s[i]))
			i++;
		if (s[i] && !ws(s[i]))
		{
			while (s[i] && !ws(s[i]))
				write(1, &s[i++], 1);
			write(1, " ", 1);
		}
	}
	while (start < end)
		write(1, &s[start++], 1);
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
		rostring(argv[1]);
	write(1, "\n", 1);
	return 0;
}
