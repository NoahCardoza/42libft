/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:12:05 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/21 12:32:55 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int out;
	int neg;
	int i;
	int len;

	out = 0;
	neg = 1;
	i = -1;
	len = 0;
	while (*str && ft_isspace(*str) && str++)
		;
	if (*str == '-' && str++)
		neg = -1;
	else if (*str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		out = (out * 10) + *str++ - '0';
		if (++len > 18)
			return ((neg == 1 ? -1 : 0));
	}
	return (out * neg);
}
