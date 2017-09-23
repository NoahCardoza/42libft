/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:19:08 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/22 19:22:53 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Gets a link by it's index.
** Returns null and prints error if index doesn't exist.
*/

t_list	*ft_lstindex(t_list *lst, int i)
{
	while (lst && i-- > 0)
		lst = lst->next;
	if (i > 0)
	{
		ft_putstr_fd("[ERROR] Index out of range.\n", 2);
		return (NULL);
	}
	return (lst);

}