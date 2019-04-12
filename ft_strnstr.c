/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 12:56:19 by eesaki            #+#    #+#             */
/*   Updated: 2019/04/12 13:46:45 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *nd, size_t len)
{
	size_t	h;
	size_t	n;
	size_t	nlen;

	if (*nd == '\0')
		return ((char *)hs);
	nlen = ft_strlen(nd);
	h = 0;
	n = 0;
	while (hs[h] && len >= nlen)
	{
		if (hs[h] == nd[n] && ft_strncmp(&hs[h], &nd[n], nlen) == 0)
			return ((char *)&hs[h]);
		len--;
		h++;
	}
	return (NULL);
}
