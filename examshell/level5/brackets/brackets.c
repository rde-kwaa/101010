/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:25:09 by exam              #+#    #+#             */
/*   Updated: 2018/07/12 11:36:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_round(char c)
{
	if (c == '(')
		return 1;
	else if (c == ')')
		return 0;
	return -1;
}

int		is_square(char c)
{
	if (c == '[')
		return 1;
	else if (c == ']')
		return 0;
	return -1;
}

int		is_curly(char c)
{
	if (c == '{')
		return 1;
	else if (c == '}')
		return 0;
	return -1;
}

void	brackets(char *s)
{
	int	i;
	int	j;
	int	k;
	int	n;

	i = 0;
	j = 0;
	k = 0;
	n = 0;
	while (s[n])
	{
		if (is_round(s[n]) == 1 && is_square(s[n+1]) != 0 && \
					is_curly(s[n+1]) != 0)
			i++;
		else if (is_round(s[n]) == 0)
			i--;
		else if (is_square(s[n]) == 1 && is_round(s[n+1]) != 0 && \
				is_curly(s[n]) != 0)
			j++;
		else if (is_square(s[n]) == 0)
			j--;
		else if (is_curly(s[n]) == 1 && is_round(s[n+1]) != 0 && \
					is_square(s[n+1]) != 0)
			k++;
		else if (is_curly(s[n]) == 0)
			k--;
		n++;
	}
	if (!i && !j && !k)
		write(1, "OK", 2);
	else
		write(1, "Error", 5);
}

int		main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			brackets(argv[i++]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}
