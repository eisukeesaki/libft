/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 09:55:20 by eesaki            #+#    #+#             */
/*   Updated: 2019/02/20 09:55:22 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && n > i)
	{
		dst[i] = src[i];
		i++;
	}

	while (n > i)
		dst[i++] = '\0';

	return (&dst[0]);
}
