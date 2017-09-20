/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:28:46 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/19 19:50:01 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
// #include <stdlib.h>
#include <unistd.h>


// int main(void)
// {
// 	// char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	// char buff1[0xF00] = "there is no stars in the sky";
// 	// char buff2[0xF00] = "there is no stars in the sky";
// 	// size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
// 	// size_t r1 = strlcat (buff1, str, max);
// 	// size_t r2 = ft_strlcat(buff2, str, max);
// 	size_t r1;
// 	size_t r2;
// 	// if (r1 != r2)
// 	// 	printf("Fail 1\n");
// 	// else
// 	// 	printf("Success\n");
// 	char s1[5] = "";
// 	char s2[5] = "";
// 	r1 = 	strlcat(s1, "hello to ntoniolo for this test !", 5);
// 	r2 = ft_strlcat(s2, "hello to ntoniolo for this test !", 5);
// 	printf("%zu =? %zu\n", r1, r2);
// 	printf("OG :=> %s\n", s1);
// 	printf("FT :=> %s\n", s2);
// 	if (r1 != r2)
// 		printf("Fail 2\n");
// 	else
// 		printf("Success\n");
// }

int main(void)
{
	char *s1 = "\200";
	char *s2 = "\0";
	int i1 = ((strncmp(s1, s2, 1) > 0) ? 1 : ((strncmp(s1, s2, 1) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(s1, s2, 1) > 0) ? 1 : ((ft_strncmp(s1, s2, 1) < 0) ? -1 : 0));
	printf("%d, %d\n", i1, i2);
	if (i1 != i2)
		printf("Fail\n");
	else
		printf("Success\n");
}


// int main(void)
// {

// 	// ft_putnbr_fd(-((1<<31) - 1), 1);
// 	printf("%d\n", atoi("-9999999999999999999"));
// 	printf("%d\n", ft_atoi("-9999999999999999999"));
// 	return 0;
// }

// #include <ctype.h>
// // #include <stdio.h>
// int main()
// {
// 	// char c = 'c';
// 	// int cu = L'ø';
// 	// char cul[] = {0xc3, 0x98};

// 	// printf("%lu\n", sizeof(c));
// 	// printf("%lu\n", sizeof(cu));
// 	// printf("%lu\n", sizeof(cul));

// 	// unsigned char *cc;
// 	// cc = (unsigned char*)(&cu);
// 	// printf("%lu\n", sizeof(cc));
// 	// // char cul[] = {0xc3, 0x98};
// 	// // write(1, &c, 1);
// 	// // printf("\n");
// 	// write(1, &cc, 8);
// 	// printf("\n");
// 	// write(1, &cul, 2);

// 	int size = 8 * 1024 * 1024;
// 	char *dst = (char *)malloc(sizeof(char) * size);
// 	char *data = (char *)malloc(sizeof(char) * size);

// 	// ft_memmove (data, 'A', size, __builtin_object_size (data, 0));
// 	memmove(dst, data, size);
// 	ft_memmove(dst, data, size);
// 	// // printf("%d\n", ft_isupper('A'));
// 	// printf("%d\n", ft_islower('a'));
//    // int c;
//    // for(c = 1; c <= 127; ++c)
//    // 	if (isprint(c)!= 0)
//    //           printf("%d\n", c);
//    return 0;
// }


// char s1[4] = "";
	// char s2[4] = "";
	// r1 = strlcat (s1, "thx to ntoniolo for this test !", 4);
	// r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	// if (r1 != r2)
	// 	printf("Fail 2\n");
	// else
	// 	printf("Success\n");
	// if (!strcmp(buff1, buff2))
	// 	printf("Success\n");
	// printf("Fail\n");

