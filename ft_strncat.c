/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:40:12 by eesaki            #+#    #+#             */
/*   Updated: 2019/02/19 18:40:13 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	k;
	
	i = 0;
	k = 0;
	while(dst[i] != '\0')
		i++;
	while (src[k] && k < n)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (dst);
}
