/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:32:27 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/19 18:00:52 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *match;
	const char *substr;

	match = haystack;
	if (!*needle)
		return ((char*)(haystack));
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			match = haystack;
			substr = needle;
			while (1)
			{
				if (*match++ != *substr++)
					break ;
				if (!*substr)
					return ((char*)(haystack));
			}
		}
		haystack++;
	}
	return ((char*)(0));
}
