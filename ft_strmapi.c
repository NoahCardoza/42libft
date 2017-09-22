/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:28:04 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/22 12:45:32 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !*s)
		return (NULL);
	if ((str = ft_strnew(ft_strlen(s))))
	{
		i = 0;
		while (*s)
		{
			*(str + i) = (*f)(i, *s++);
			i++;
		}
	}
	return (str);
}
