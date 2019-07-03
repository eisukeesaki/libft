/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 02:56:20 by eesaki            #+#    #+#             */
/*   Updated: 2019/07/03 02:57:21 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		n;
	int		i;
	int		neg;

	n = 0;
	i = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	neg = str[i] == '-';
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (neg ? -n : n);
}
