/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 19:00:31 by exam              #+#    #+#             */
/*   Updated: 2017/09/21 12:07:06 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"


/*
** Allocate (with malloc(3)) and returns a "fresh" string ending
** with '\0' representing the integer n given as argument.
** Negative numbers must be supported. If the allocation fails,
** the function returns NULL .
*/

char	*ft_itoa(int n)
{
	int		len;
	char*	str;
	int		neg;
	long	tmp;

	neg = (tmp = n) < !(len = 1);
	while ((n /= 10))
		len++;
	if (!(str = ft_strnew(len + neg)))
		return (NULL);
	if (neg)
	{
		*str = '-';
		tmp = -tmp;
	}
	len -= !neg;
	while(len >= neg)
	{
		*(str + len--) = ('0' + tmp % 10);
		tmp /= 10;
	}
	return (str);
}
