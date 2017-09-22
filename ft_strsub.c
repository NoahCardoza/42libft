/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:25:45 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/20 21:46:24 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a "fresh" substring
** from the string given as argument. The substring begins at
** indexstart and is of size len. If start and len aren't refering
** to a valid substring, the behavior is undefined. If the
** allocation fails, the function returns NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (!s)
		return ((char*)(0));
	if ((sub = ft_strnew(len)))
	{
		while (len--)
			*(sub + len) = *(s + start + len);
	}
	return (sub);
}
