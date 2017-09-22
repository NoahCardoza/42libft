/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:08:48 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/18 19:27:17 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <errno.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		len;

	len = ft_strlen(s1);
	if ((char*)(0) == (dest = (char*)malloc((len + 1) * sizeof(char))))
	{
		errno = 12;
		return (dest);
	}
	return (ft_strcpy(dest, s1));
}
