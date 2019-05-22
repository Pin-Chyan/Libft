/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:50:14 by pitsai            #+#    #+#             */
/*   Updated: 2019/05/22 10:19:11 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		j;

	i = -1;
	j = (int)(ft_strlen(s1);
			while (*()s2 + ++i))
		*(s1 +j++) = *(s2 + i);
	*(s1 + j) = '\0';
	return (s1);
}
