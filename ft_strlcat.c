/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 20:51:21 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/22 13:19:30 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"


#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	char *d;
	const char *s = src;
	size_t n;
	size_t dlen;

	d = dst;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	dlen = d - dst;
	n = size - dlen;
	if(!n)
		return (dlen + ft_strlen(s));
	while (*s++)
		if (n != 1 && n--)
			*d++ = *(s - 1);
	*d = '\0';
	return (dlen + (s - src - 1));
}


// size_t __ft_strlcat(char *dst, const char *src, size_t siz)
// {
// 	char *d = dst;
// 	const char *s = src;
// 	size_t n = siz;
// 	size_t dlen;
//
// 	/* Find the end of dst and adjust bytes left but don't go past end */
// 	while (n-- != 0 && *d)
// 		d++;
// 	dlen = d - dst;
// 	n = siz - dlen;
//
// 	if (n == 0)
// 		return(dlen + strlen(s));
	// while (*s != '\0') {
	// 	if (n-- > 1) {
	// 		*d++ = *s;
	// 	}
	// 	s++;
	// }
// 	*d = '\0';
//
// 	return(dlen + (s - src));	/* count does not include NUL */
// }

//
// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t src_len;
// 	size_t dst_len;
//
// 	dst_len = strlen(dst);
// 	src_len = strlen(src);
// 	printf("dst_len: %zu\n", dst_len);
// 	printf("src_len: %zu\n", src_len);
// 	printf("size: %zu\n", size);
// 	if (!size)
// 		return (dst_len);
// 	printf("if (%zu > %zu): // %d\n", size, dst_len, size > dst_len);
// 	if (size > dst_len)
// 		ft_strncpy(dst + dst_len, src, size - dst_len - 1);
// 	else
// 		return (dst_len - src_len + 1);
// 	return (dst_len + src_len - 1);
//
// }

// int main(int argc, char const *argv[]) {
// 	char	buf[10];
//
// 	bzero(buf, 10);
// 	memset(buf, 'a', 10);
// 	ft_strlcat(buf, "ccc", 10);
// 	printf("%s\n", buf);
// 	// char	buf[10];
//   //
// 	// bzero(buf, 10);
// 	// memset(buf, 'a', 10);
// 	// // printf("%lu\n", ft_strlcat(buf, "ccc", 10));
// 	// // assert(strlcat(buf, "ccc", 10) == 13);
// 	// printf("%s\n", buf);
// 	return 0;
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t src_len;
// 	size_t dst_len;
//
// 	dst_len = ft_strlen(dst);
// 	src_len = ft_strlen(src);
// 	printf("%s\n\n\n", dst);
// 	printf("%zu, %zu\n", dst_len, src_len);
// 	if (size)
// 	{
// 		// if (dst_len + src_len > size)
// 		// {
// 			if (dst_len > size) {
// 				return (dst_len + src_len - 1);
// 			}
// 			else if (src_len > size)
// 			{
// 				ft_strncpy(dst + dst_len, src, size - dst_len - 1);
// 				return (src_len > size ? src_len : src_len + size);
// 			}
//
// 		// }
// 		else
// 		{
// 			ft_strncpy(dst + dst_len, src, src_len + (dst_len + src_len == size ? -1 : 1));
// 		}
// 	}
// 	return (dst_len + src_len);
// }

// Test
// //
// int main(int argc, char const *argv[]) {
// 	// char	buf[10];
// 	// int		ret;
//   //
// 	// bzero(buf, 10);
// 	// memset(buf, 'a', 10);
// 	// ret = ft_strlcat(buf, "ccc", 10);
// 	// printf("%d\n", ret);
// 	// assert(ret == 13);
//
// 	char	buf[10];
// 	int		ret;
//
// 	bzero(buf, 10);
// 	strcpy(buf, "abc");
// 	ft_strlcat(buf, "abcdefghijklmnop", 10);
// 	printf("%s\n", buf);
// 	// printf("%d\n", ft_strlen(buf));
// 	assert(strcmp(buf, "abcabcdef") == 0);
// 	ret = ft_strlcat(buf, "abcd", 2);
// 	printf("%d\n", ret);
// 	assert(ret == 6);
//
// 	return 0;
// }
