/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:25:43 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/20 21:47:56 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a "fresh" string ending
** with '\0', result of the concatenation of s1 and s2. If
** the allocation fails the function returns NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (!s1 || !s2)
		return ((char*)(0));
	if ((str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	return (str);
}