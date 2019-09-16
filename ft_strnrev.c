/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 23:31:39 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/16 00:32:23 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnrev(char *s, unsigned head)
{
	size_t	len;
	size_t	k;
	char	tmp;

	len = ft_strlen(s);
	k = len - 1;
	while (head < k)
	{
		tmp = s[head];
		s[head] = s[k];
		s[k] = tmp;
		head++;
		k--;
	}
	return (s);
}
