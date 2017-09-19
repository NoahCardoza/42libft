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
	const char *restrict *s;

	s = src;
	while (*src && size--)
		*dst++ = *src++;
	if (*dst && size)
		while (*dst)
			*dst++ = '\0';
	return ((int)((src - s)));
}
