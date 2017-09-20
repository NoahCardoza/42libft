/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 19:34:00 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/19 19:49:34 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *s1_u;
	unsigned char *s2_u;

	s1_u = (unsigned char*)s1;
	s2_u = (unsigned char*)s2;
	while (--n && *s1_u && *s2_u && *s1_u == *s2_u)
		(s1_u++ && s2_u++);
	return (*s1_u - *s2_u);
}
