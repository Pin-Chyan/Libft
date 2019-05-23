/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:40:59 by pitsai            #+#    #+#             */
/*   Updated: 2019/05/23 09:18:53 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_bezero(void *s, size_t n);
void	*ft_memccpy(void * restrict dst, const void * restrict src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void * restrict dst, const void * restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_strdup(char *src);
int		ft_isalnum(int c);
int		ft_islapha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strcpy(char *s1, char *s2);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize); //busy
