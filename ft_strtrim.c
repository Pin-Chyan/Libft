/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 09:53:37 by pitsai            #+#    #+#             */
/*   Updated: 2019/06/04 16:10:16 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	*ptr;

	start = 0;
	end = ft_strlen(s) - 1;
	while ((s[start] == ' ') || (s[start] == '\t') || (s[start] == '\n'))
		start++;
	if (s[start] == '\0')
		return ("");
	while ((s[end] == ' ') || (s[end] == '\t') || (s[end] == '\n'))
		end--;
	ptr = malloc(end - start + 2);
		if (!ptr)
			return (NULL);	
	i = start;
	while ( i <= end)
	{
		ptr[i - start] = s[i];
		i++;
	}
	ptr[i - start] = '\0';
	return (ptr);
}
