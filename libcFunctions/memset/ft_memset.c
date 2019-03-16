/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 16:59:21 by eisuke            #+#    #+#             */
/*   Updated: 2019/03/15 20:39:36 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	while (len > 0)
	{
		len--;
		((unsigned char *)b)[len] = (unsigned char)c;
	}
	return (b);
}

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	int	i;
	
// 	i = 0;
// 	while (len > 0)
// 	{
// 		((unsigned char *)b)[i] = (unsigned char)c;
// 		i++;
// 		len--;
// 	}
// 	return (b);
// }
