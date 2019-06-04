/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:51:23 by pitsai            #+#    #+#             */
/*   Updated: 2019/06/04 16:11:16 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_iswhitespace(str[i]))
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if (num <= 2147483647 / 10)
			num = num * 10 + (*(str + i++) - '0');
		else if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (num * sign);
}
