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

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<debug purpose
// #include <stdio.h>
// #include <string.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>debug purpose

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*str;
	char		*sbstr;
	unsigned	i; // replace by decrementing len?

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

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
// int		main(void)
// {
// 	// const char haystack[] = "abc def ghi";
// 	// const char needle[] = "def";

// 	// char	*s1 = "MZIRIBMZIRIBMZE123";
// 	// char	*s2 = "MZIRIBMZE";
// 	// size_t	max = strlen(s2);

// 	// char *big = "123456789";
// 	// char *little = "9";
// 	// size_t	max = 8;

// 	// char 	*s1 = strnstr(big, little, max);
// 	// char 	*s2 = ft_strnstr(big, little, max);

// 	char	*s1 = "oh no not the empty string !";
// 	char	*s2 = "";
// 	size_t	max = 0;

// 	printf("libc->%s\n", strnstr(s1, s2, max));
// 	printf("  ft->%s\n", ft_strnstr(s1, s2, max));

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose
