/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 15:21:12 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/22 15:39:44 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *node;
	t_list *tmp;

	node = NULL;
	if (lst)
		node = (*f)(ft_lstnext(&lst));
	tmp = node;
	while (lst)
	{
		tmp->next = (*f)(ft_lstnext(&lst));
		tmp = tmp->next;
	}
	return (node);
}