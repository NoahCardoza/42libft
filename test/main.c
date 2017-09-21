/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahcardoza <noahcardoza@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:28:46 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/21 02:30:52 by noahcardoza      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

void pc(int c)
{
	if ((c & 0xF000) == 0x2000)
	{
		write(1, &c, 1);
		write(1, &c, 1);
		write(1, &c, 1);
	}
	else
		printf("ASC\n");
	write(1, &c, 1);
}

int main(void)
{
	int c = L'☺';

	printf("%d\n", 0xe2);
	printf("%d\n", 0x98);
	printf("%d\n\n", 0xba);
	printf("%d\n", c);
	printf("%d\n", c & 0xF000);
	printf("%d\n", c & 0xFFF);

	pc(130);
	// printf("%d\n", L'☺');
	return (0);
}







// void	test_itoa()
// {
// 	int		ints[4] = {0, -3, 256, -87459};
// 	char	str[4][10] = {"0", "-3", "256", "-87459"};
// 	int		i = -1;
// 	char	*tmp;


// 	while (++i < 4) {
// 		tmp = ft_itoa(ints[i]);
// 		printf("%s\n", tmp);
// 		if (strcmp(tmp, str[i]) != 0) {
// 			printf("ERROR\n");
// 			return;
// 		}
// 	}
// }


// int		main(int argc, const char *argv[])
// {
// 	char *s = ft_strnew(5);
// 	ft_strcpy(s, "hello");
// 	printf("%s\n", s);
// 	ft_strclr(NULL);
// 	printf("%s\n", s);
// 	// printf("%s\n", (ft_itoa(0)));
// 	// printf("%s\n", (ft_itoa(9)));
// 	// printf("%s\n", (ft_itoa(-9)));
// 	// printf("%s\n", (ft_itoa(10)));
// 	// printf("%s\n", (ft_itoa(-10)));
// 	// printf("%s\n", (ft_itoa(8124)));
// 	// printf("%s\n", (ft_itoa(-9874)));
// 	// printf("%s\n", (ft_itoa(543000)));
// 	// printf("%s\n", (ft_itoa(-2147483648LL)));
// 	// printf("%s\n", (ft_itoa(2147483647)));
// 	return (0);
// }

// int main(void)
// {
// 	test_itoa();
// 	// int size;
// 	// char *i1;

// 	// i1 = ft_itoa(-5859);
// 	// printf("%s\n", i1);
// 	// size = get_last_malloc_size();
// 	// if (6 == 6)
// 	// {
// 	// 	printf("SUCCESS\n");
// 	// 	exit(0);
// 	// }
// 	// printf("FAIL");
// }

// int main(void)
// {
// 	char *i1 = ft_itoa(-1234);
// 	printf("%s\n", i1);
// 	if (strcmp(i1, "-1234"))
// 	{
// 		printf("FAIL\n");
// 		exit(0);
// 	}
// 	printf("SUCCESS\n");
// }

// int main(void)
// {

// 	char *i1 = ft_itoa(-623);
// 	char *i2 = ft_itoa(156);
// 	char *i3 = ft_itoa(-0);

// 	printf("%s\n", i1);
// 	printf("%s\n", i2);
// 	printf("%s\n", i3);

// 	if (strcmp(i1, "-623"))
// 	{
// 		printf("FAIL\n");
// 		exit(0);
// 	}
// 	if (strcmp(i2, "156"))
// 	{
// 		printf("FAIL\n");
// 		exit(0);
// 	}
// 	if (strcmp("0", i3))
// 	{
// 		printf("FAIL\n");
// 		exit(0);
// 	}
// 	printf("SUCCESS\n");
// }




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

// int main(void)
// {
// 	char *b = "override this !";
// 	char b2[0xF0];
// 	size_t size = strlen(b);

// 	for (size_t i = 0; i < size; i++)
// 		b2[i] = f_strmap(b[i]);
// 	b2[size] = 0;
// 	char *ret = ft_strmap(b, f_strmap);

// 	if (strcmp(b2, ret))
// 		printf("Fail\n");
// 	else
// 		printf("Success\n");
// }


// int main(void)
// {

// 	// ft_putnbr_fd(-((1<<31) - 1), 1);
// 	printf("%d\n", atoi("-9999999999999999999"));
// 	printf("%d\n", ft_atoi("-9999999999999999999"));
// 	return 0;
// }

// #include <ctype.h>
// // #include <stdio.h>

// int	ft_bitlen(int value)
// {
// 	unsigned int	count;

// 	count = 0;
// 	while (value)
// 	{
// 		count++;
// 		value >>= 1;
// 	}
// 	return (count);
// }

// unsigned int	ft_bitmask(int s, int e)
// {
// 	unsigned int	v;

// 	v = 1;
// 	while (s < e)
// 	{
// 	printf("%d\n", (v <<= s++));
// 	}
// 	return (v);
// }

// void f_wt(int c)
// {
// 	int t;
// 	printf("%d\n", c);
// 	if (c > 127)
// 	{
// 		c -= (t = 0xe2);
// 		write(1, &t, 1);
// 		printf("%d\n", c);
// 	}
// }

// void f_wt(int c)
// {
// 	if (ft_bitlen(c) < 8)
// 		printf("ASCII\n");
// 	else
// 		printf("UNICODE\n");

// }

// int main(void)
// {
// 	int x = L'☺';
// 	printf("%d\n", x);
// 	printf("%d\n", x & 0xF);
// 	printf("%d\n", x & 0xF0);
// 	printf("%d\n", x & 0xF00);

//     // int a = L'☺';
//     // uint8_t msb = (a >> 16) & 0xff;
//     // uint8_t msb1 = (a >> 8) & 0xff;
//     // uint8_t lsb = a & 0xff;

//     // write(1, &msb, 1);
//     // write(1, &msb1, 1);
//     // write(1, &lsb, 1);
//     // printf("MSB: %u, MSB1: %u, LSB: %u\n", msb, msb1, lsb);

//     // uint32_t b = msb;
//     // b = (b<<8) | msb1;
//     // b = (b<<8) | lsb;

//     // printf("Final: %d\n", b);

//     // return 0;
// }

// int main()
// {
// 	int c = L'☺';
// 	int ch = 'c';
// 	f_wt(c);
// 	f_wt(ch);
// 	// printf("%d\n", sizeof(char));
// 	// printf("%d\n", sizeof(int));
// 	// printf("%d\n", ft_bitlen(c) / 8);
// 	// printf("%d\n", ft_bitmask(0, ft_bitlen(c)));
// 	// printf("%d\n", !!(c & (1 << ft_bitlen(c))));
// 	// f_wt(c);
// 	// printf("%d\n", ft_active_bits(c));
// 	// while ()
// 	// 	write()
// }


// char cul[] = {0xc3, 0x98};

// 	printf("%lu\n", sizeof(c));
// 	printf("%lu\n", sizeof(cu));
// 	printf("%lu\n", sizeof(cul));

// 	unsigned char *cc;
// 	cc = (unsigned char*)(&cu);
// 	printf("%lu\n", sizeof(cc));
// 	// char cul[] = {0xc3, 0x98};
// 	// write(1, &c, 1);
// 	// printf("\n");
// 	write(1, &cc, 8);
// 	printf("\n");
// 	write(1, &cul, 2);
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

