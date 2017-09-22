/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:00:43 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/18 19:02:36 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *vd_d;
	unsigned char *vd_s;

	vd_d = (unsigned char*)dst;
	vd_s = (unsigned char*)src;
	while (n--)
		*vd_d++ = *vd_s++;
	return (dst);
}
