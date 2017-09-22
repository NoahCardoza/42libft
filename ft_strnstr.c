/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:40:58 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/19 18:50:13 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *match;
	const char *substr;
	size_t tmp_len;

	match = haystack;
	if (!*needle)
		return ((char*)(haystack));
	while (*haystack && len--)
	{
		if (*haystack == *needle)
		{
			tmp_len = len;
			match = haystack;
			substr = needle;
			while (len-- + 1)
			{
				if (*match++ != *substr++)
					break ;
				if (!*substr)
					return ((char*)(haystack));
			}
			len = tmp_len;
		}
		haystack++;
	}
	return ((char*)(0));
}
