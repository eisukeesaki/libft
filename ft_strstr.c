/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:35:08 by eesaki            #+#    #+#             */
/*   Updated: 2019/02/13 16:35:20 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *str;
	char *sbstr;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		str = (char *)haystack;
		sbstr = (char *)needle;
		while (*sbstr && *str == *sbstr)
		{
			str++;
			sbstr++;
		}
		if (*sbstr == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
