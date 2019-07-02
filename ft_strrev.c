/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 19:48:24 by eesaki            #+#    #+#             */
/*   Updated: 2019/07/01 19:50:55 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t	len;
	size_t	i;
	size_t	k;
	char	tmp;

	len = ft_strlen(s);
	i = 0;
	k = len - 1;
	while (i < k)
	{
		tmp = s[i];
		s[i] = s[k];
		s[k] = tmp;
		i++;
		k--;
	}
	return (s);
}
