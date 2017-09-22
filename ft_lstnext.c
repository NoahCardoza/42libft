/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 15:38:23 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/22 15:55:11 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Moves the list up once and returns the previous position.
*/

t_list	*ft_lstnext(t_list **lst)
{
	t_list	*prev;

	if (*lst)
	{
		prev = (*lst);
		(*lst) = (*lst)->next;
		return (prev);
	}
	return ((void*)(0));
}
