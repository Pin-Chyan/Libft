/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 14:44:59 by event             #+#    #+#             */
/*   Updated: 2019/05/18 15:18:06 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Libft.h>

int		ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		c = c + 32;
	return c;
}