/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:07:15 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/18 18:45:15 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void*	ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char ch;
	unsigned char *vd_d;
	unsigned char *vd_s;

	ch = (unsigned char)c;
	vd_d = (unsigned char*)dst;
	vd_s = (unsigned char*)src;
	while (n--)
	{
		*vd_d++ = *vd_s++;
		if (*(vd_s - 1) == ch)
			return ((void*)vd_d);
	}
	return ((void*)(0));
}