/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:54:22 by eesaki            #+#    #+#             */
/*   Updated: 2019/02/18 15:54:24 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> // debug purpose
// #include <string.h> // debug purpose
#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	if (n < 1)
		return (0);
	while (i < n - 1 && *s1 && (*s2 == *s1))
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// maintest
// int				main(void)
// {
// 	int			a;

// init
// 	a = ft_strncmp("abc", "abc", 2);

// 	if (strncmp("abc", "abc", 2) != a)
// 		printf("strncmp() != ft_strncmp() #1\n");
// 	if (a)
// 		printf("a #1\n");

// // init
// 	a =  ft_strncmp("cba", "abc", 2);

// 	if (strncmp("cba", "abc", 2) != a)
// 		printf("strncmp() != ft_strncmp() #2\n");
// 	if (!a)
// 		printf("!a #1\n");

// // init
// 	a =  ft_strncmp("abc", "cba", 2);

// 	if (strncmp("abc", "cba", 2) != a)
// 		printf("strncmp() != ft_strncmp() #3\n");
// 	if (!a)
// 		printf("!a #2\n");

// // init
// 	a = ft_strncmp("", "", 3);

// 	if (strncmp("", "", 3) != a)
// 		printf("strncmp() != ft_strncmp() #4\n");
// 	if (a)
// 		printf("a #2\n");

// // init
// 	a = ft_strncmp("q", "a", 0);

// 	if (strncmp("q", "a", 0) != a)
// 		printf("strncmp() != ft_strncmp() #5\n");
// 	if (a)
// 		printf("a #3\n");

// init
// 	a = ft_strncmp("abc", "abd", 2);

// 	if(strncmp("abc", "abd", 2) != a)
// 		printf("libc->%d\n  ft->%d\n", strncmp("abc", "abd", 2), ft_strncmp("abc", "abd", 2));
// 		// printf("strncmp() != ft_strncmp() #6\n");
// 	if (a)
// 		printf("a #4\n");

// 	return (0);
// }
//maintest

// test purpose
// int		main(void)
// {
// 	char	*s1 = "q";
// 	char	*s2 = "a";

// 	printf("libc->%d\n  ft->%d\n", strncmp(s1, s2, 0), ft_strncmp(s1, s2, 0));

// 	return (0);
// }
// test purpose

// old version
// int		ft_strncmp(const char *s1, const char *s2, size_t len)
// {
// 	while (len > 0)
// 	{
// 		if (*s1 == *s2)
// 		{
// 			s1++;
// 			s2++;
// 			len--;
// 		}
// 		else if (*s1 > *s2)
// 			return (*s1 - *s2);
// 		else if (*s1 < *s2)
// 			return (*s1 - *s2);
// 	}
// 	return (0);
// }
