/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:32:02 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/19 17:48:56 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len)
		if (*(s + len--) == c)
			return ((char*)s + len + 1);
	return ((char*)(0));
}