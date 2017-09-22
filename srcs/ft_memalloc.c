/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 19:56:10 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/19 20:01:02 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char *ptr;

	if ((ptr = malloc(size)))
	{
		while (size)
			ptr[size--] = 0;
		ptr[size] = 0;
		return ((void*)(ptr));
	}
	return (NULL);
}
