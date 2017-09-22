/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 19:34:46 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/19 19:42:53 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *s1_u;
	unsigned char *s2_u;

	s1_u = (unsigned char*)s1;
	s2_u = (unsigned char*)s2;
	while (*s1_u && *s2_u && *s1_u == *s2_u)
		(s1_u++ && s2_u++);
	return (*s1_u - *s2_u);
}
