/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:36:13 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/18 19:01:32 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void*	ft_memchr(const void *s, int c, size_t n)
{
	unsigned char ch;
	unsigned char *vd;

	ch = (unsigned char)c;
	vd = (unsigned char*)s;
	while (n--)
		if (*vd++ == ch)
			return ((void*)(vd - 1));
	return ((void*)(0));	
}