/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:22:05 by pitsai            #+#    #+#             */
/*   Updated: 2019/05/23 11:02:52 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		i;
	int		j;

	i = -1;
	j = (int)ft_strlen(s1);

	while (*(s2 ++i) && i < (int)n)
		*(s1 + j++) = *(s2 + i);
	*(s1 + j) = '\0';
	return (s1);
}
