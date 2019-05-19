/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 09:47:39 by event             #+#    #+#             */
/*   Updated: 2019/05/19 09:49:47 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		isdigit(int c)
{
	if (c >= '0' && c <='9')
		return (true);
	return (false);
}
