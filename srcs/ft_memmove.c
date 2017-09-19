/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:15:31 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/18 18:50:49 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void*	ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *vd_d;
	unsigned char *vd_s;

	vd_d = (unsigned char*)dst;
	vd_s = (unsigned char*)src;
	if (dst > src)
		while (len--)
			*(vd_d + len) = *(vd_s + len);
	else
		while (len--)
			*vd_d++ = *vd_s++;
	return (dst);
}