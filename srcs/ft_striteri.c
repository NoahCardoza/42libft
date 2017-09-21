/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:23:00 by noahcardoza       #+#    #+#             */
/*   Updated: 2017/09/20 21:42:23 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	if (s)
	{
		i = 0;
		while (*s)
			(*f)(i++, s++);
	}
}