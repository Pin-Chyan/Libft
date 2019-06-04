/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:40:59 by pitsai            #+#    #+#             */
/*   Updated: 2019/06/04 17:03:19 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

//functions

void		ft_bzero(void *s, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_strdup(char *src);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strlen(char const *str);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_islower(int c);
int			ft_isupper(int c);
int			ft_iswhitespace(int c);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strcpy(char *s1, char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *big, const char *little);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);

//additional

void		*ft_memalloc(size_t size);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(char *s);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
int			ft_countwords(char const *str, char c);
char		*ft_itoa(int n);
char		*ft_strtrim(char const *s);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strnew(size_t size);
char		*ft_strjoin(char const *S1, char const *s2);
char		**ft_strsplit(char const *s, char c);

#endif
