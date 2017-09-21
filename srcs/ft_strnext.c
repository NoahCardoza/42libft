/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 18:12:15 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/20 18:16:20 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Similar to ft_strchr but returns the end of the
** string when no char is found.
*/

char	*ft_strnext(char const *s, char c)
{
	while (*s && *s != c)
		s++;
	return ((char*)(s));
}