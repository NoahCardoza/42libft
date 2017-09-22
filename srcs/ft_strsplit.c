/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:25:36 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/20 21:49:52 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of "fresh"
** strings (all ending with '\0', including the array itself) obtained
** by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL. Example
** : ft_strsplit("*hello*fellow***students*", ’*’) returns
** the array ["hello", "fellow", "students"] .
*/

char	**ft_strsplit(char const *s, char c)
{
	int ct;
	char const *tmp;
	char **ret;

	if ((ct = !(tmp = s)))
		return ((char**)(0));
	while (*tmp && ft_strwalk(&tmp, c) && ++ct)
		tmp = ft_strnext(tmp, c);
	if ((ret = (char**)malloc((ct + 1) * sizeof(char*))) && !(ct = !!(ret[ct] = NULL)))
	{
		while (ft_strwalk(&s, c))
		{
			tmp = ft_strnext(s, c);
			if ((ret[ct] = ft_strnew(tmp - s)))
			{
				ft_strncpy(ret[ct++], s, tmp - s);
				s = tmp;
			}
			else
				s = (*ret++ = NULL);
		}
	}
	return (ret);
}
