/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 00:57:13 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/22 14:40:56 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	if ((node = (t_list*)malloc(sizeof(t_list))))
	{
		node->content = NULL;
		if (content && content_size)
		{
			node->content = ft_memalloc(content_size);
			ft_memcpy(node->content, content, content_size);
		}
		node->content_size = (NULL == content ? 0 : content_size);
		node->next = NULL;
	}
	return (node);
}
