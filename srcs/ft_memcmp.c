/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:02:40 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/18 19:06:50 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <strings.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *vd_1;
	unsigned char *vd_2;

	vd_1 = (unsigned char*)s1;
	vd_2 = (unsigned char*)s2;
	while (n--)
		if ((*vd_1++ - *vd_2++))
			return (*--vd_1 - *--vd_2);
	return (0);
}
