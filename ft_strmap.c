/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:25:00 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/20 21:53:38 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	char *tmp;

	if (!s || !*s)
		return (NULL);
	if ((str = ft_strnew(ft_strlen(s))))
	{
		tmp = str;
		while (*s)
			*tmp++ = (*f)(*s++);
	}
	return (str);
}
