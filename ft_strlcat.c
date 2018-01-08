/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 20:51:21 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/22 13:19:30 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	char *d;
	char *s;
	size_t n;
	size_t dlen;

	d = dst;
	s = (char*)src;
	n = size;
	while (n-- && *d)
		d++;
	dlen = d - dst;
	n = size - dlen;
	if(!n)
		return (dlen + ft_strlen(s));
	while (*s++)
		if (n != 1 && n--)
			*d++ = *(s - 1);
	*d = '\0';
	return (dlen + (s - src - 1));
}
