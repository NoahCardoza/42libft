/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwalk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 18:14:24 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/20 18:16:19 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Transverses a char array while the current char equals 
** c. It returns 0 or 1 if it makes it to the end of the
** array.
*/

int		ft_strwalk(char const **s, char c)
{
	while (c == **s)
		(*s)++;
	return (!!**s);
}