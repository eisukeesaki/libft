/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 19:35:49 by eesaki            #+#    #+#             */
/*   Updated: 2019/03/26 18:46:31 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digit(long n)
{
	size_t	i;
	
	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		i++;
		n /=10;
	}
	return (i);
}
