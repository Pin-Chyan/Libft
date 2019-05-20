/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:07:20 by event             #+#    #+#             */
/*   Updated: 2019/05/20 14:20:08 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memcpy(void *restrict dst, const void*restrict src, size_t n)
{
	char	*ptr;
	char	*ptr2;
	size_t	i;

	ptr = dst;
	ptr2 = (char *)src;

	i = -1;

	while ( ++i < n )
		*(ptr + i) = *(ptr2 + i);
	return (dst);
}
