/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 09:57:22 by event             #+#    #+#             */
/*   Updated: 2019/05/19 10:36:59 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.c>

void	memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	str = b;
	i = 0;
	while (i < len)
		*(ptr + i++) = c;
	return(b);
}
