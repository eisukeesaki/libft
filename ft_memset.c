/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisuke <eisuke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 16:59:21 by eisuke            #+#    #+#             */
/*   Updated: 2019/03/14 21:17:38 by eisuke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i = 0;
	
	while (len > 0)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
