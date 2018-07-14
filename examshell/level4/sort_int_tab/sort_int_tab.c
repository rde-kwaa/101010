/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:27:37 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/11 14:28:20 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	j;
	int	n;

	i = 1;
	j = 0;
	n = 0;
	while (i < size)
	{
		j = i;
		while (j > 0 && tab[j - 1] > tab[j])
		{
			n = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = n;
			j--;
		}
		i++;
	}
}
