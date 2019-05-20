/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:19:37 by event             #+#    #+#             */
/*   Updated: 2019/05/20 14:28:20 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memccpy( void *restrict dst, const void *restrict src, int c, size_t n)
{
	char	*ptr;
	size_t	i;
	
	i = -1;
	ptr = dst;
	while ( ++i < n)
	{
		*(ptr + i) = *((usigned char *)src + 1);
		if (*((usigned char *(src + i) == (unsigned char)c)
					return (dst + i + 1);
					}
	}
	return (NULL);
}
