/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:21:07 by nocardoz          #+#    #+#             */
/*   Updated: 2017/09/18 21:30:12 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char const *s, int fd);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_putendl(char const *s);

void	ft_bzero(void *s, size_t n);
void*	ft_memset(void *b, int c, size_t len);
void*	ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void*	ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void*	ft_memmove(void *dst, const void *src, size_t len);
void*	ft_memchr(const void *s, int c, size_t n);
void*	ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char * src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size);


int		ft_atoi(const char *str);
int		ft_strlen(const char *s);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

int		ft_isspace(int c);
int		ft_islower(int c);
int		ft_isupper(int c);