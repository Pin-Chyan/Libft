/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:52:58 by pitsai            #+#    #+#             */
/*   Updated: 2019/05/21 12:14:55 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libth.h>

void	*memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char *)s;
	i = -1 ;

	while (++i < n)
		if (*(sc + i) == (char)c)
			return ((void *) sc + i);
	return (NULL);
}
