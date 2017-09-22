/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:25:40 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/22 12:47:36 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of the string
** given as argument without whitespaces at the beginning or at
** the end of the string. Will be considered as whitespaces the
** following characters ' ', '\n' and '\t'. If s has no whitespaces
** at the beginning or at the end, the function returns a
** copy of s. If the allocation fails the function returns NULL.
*/

char	*ft_strtrim(char const *s)
{
	char const	*ptr;
	char		*ret;

	if (!(ptr = s))
		return ((char*)(0));
	while (ft_isspace(*s))
		ptr = ++s;
	if (!*s)
		return (ft_strnew(0));
	while (*s)
		s++;
	s -= 1;
	while (ft_isspace(*s))
		s--;
	s += 1;
	if ((ret = ft_strnew(s - ptr)))
		ft_strncpy(ret, ptr, s - ptr);
	return (ret);
}
