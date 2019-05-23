/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:54:11 by event             #+#    #+#             */
/*   Updated: 2019/05/23 08:58:44 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strcpy(char * dst, const char * src, size_t len)
{
	size_t	i;

	i = -1;

	while (++i < len)
		if (*(src + i))
			*(dst + i ) = *(src + i);
		else
			*(dst + i++ = '\0';
	return (dst);
}
