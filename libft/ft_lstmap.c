/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:26:19 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/04 17:53:59 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlst;

	if (lst && f)
	{
		nlst = f(lst);
		if (nlst && lst->next)
			nlst->next = ft_lstmap(lst->next, f);
		return (nlst);
	}
	return (NULL);
}
