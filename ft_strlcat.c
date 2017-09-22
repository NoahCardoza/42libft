/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 20:51:21 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/18 22:20:06 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t src_len;
	size_t dest_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size)
	{
		if (dest_len + src_len > size)
		{
			if (src_len > size)
				ft_memcpy(dst + dest_len, src, size - 1);
			return (src_len > size ? src_len : src_len + size);
		}
		ft_memcpy(dst + dest_len, src, src_len + (dest_len + src_len == size ? -1 : 1));
	}
	return (dest_len + src_len);
}
