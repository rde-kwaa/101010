/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:03:22 by exam              #+#    #+#             */
/*   Updated: 2018/07/12 10:18:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	brainfuck(char *s)
{
	int		i;
	char	*p;
	char	c;
	int		loop;

	i = 0;
	p = (char *)malloc(sizeof(char) * (2048));
	while (s[i])
	{
		c = s[i];
		if (c == '>')
			p++;
		else if (c == '<')
			p--;
		else if (c == '+')
			(*p)++;
		else if (c == '-')
			(*p)--;
		else if (c == '[' && !*p)
		{
			loop = 1;
			while (loop)
			{
				i++;
				if (s[i] == '[')
					loop++;
				if (s[i] == ']')
					loop--;
			}
		}
		else if (c == ']' && *p)
		{
			loop = 1;
			while (loop)
			{
				i--;
				if (s[i] == ']')
					loop++;
				if (s[i] == '[')
					loop--;
			}
		}
		else if (c == '.')
			write(1, p, 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		brainfuck(argv[1]);
	else 
		write(1, "\n", 1);
	return 0;
}
