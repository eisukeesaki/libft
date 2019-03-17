/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 12:56:19 by eesaki            #+#    #+#             */
/*   Updated: 2019/03/11 12:56:23 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*str;
	char		*sbstr;
	unsigned	i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	
	while (*haystack && i < len)
	{
		str = (char *)haystack;
		sbstr = (char *)needle;
		while ((*sbstr && *str == *sbstr) && i < len)
		{
			str++;
			sbstr++;
			i++;
		}
		if (*sbstr == '\0')
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}