/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 12:56:19 by eesaki            #+#    #+#             */
/*   Updated: 2019/04/10 19:57:28 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (!*needle)
		return ((char *)haystack);

	h = 0;
	n = 0;
	while (haystack[h] && h < len)
	{
		while (needle[n] && (haystack[h] == needle[n]) && h < len)
		{
			h++;
			n++;
		}
		if (h == len) // fix how to check match. use strncmp?
			return ((char *)haystack);
		else
			haystack = &haystack[h];
		n = 0;
		h++;
	}
	return (NULL);
}

int		main(void)
{
	char	buf2[] = "ozarabozaraboze123";

	printf("%s\n", ft_strnstr(buf2, "ozaraboze", 15));
	// if (strcmp(ft_strnstr(buf2, "ozaraboze", 15), "ozaraboze123") == 0)
	// 	printf("test success\n");
	// else
	// 	printf("test fail\n");
	return (0);
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	char		*str;
// 	char		*sbstr;
// 	size_t		i;

// 	i = 0;
// 	if (!*needle)
// 		return ((char *)haystack);
	
// 	while (*haystack && i < len)
// 	{
// 		str = (char *)haystack;
// 		sbstr = (char *)needle;
// 		while ((*sbstr && *str == *sbstr) && i < len)
// 		{
// 			str++;
// 			sbstr++;
// 			i++;
// 		}
// 		if (*sbstr == '\0')
// 			return ((char *)haystack);
// 		haystack++;
// 		i++;
// 	}
// 	return (NULL);
// }
