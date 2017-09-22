/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:03:50 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/22 12:47:45 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}
