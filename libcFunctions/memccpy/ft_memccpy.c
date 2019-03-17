/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 12:22:34 by eesaki            #+#    #+#             */
/*   Updated: 2019/03/17 12:01:57 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<debug purpose
#include <stdio.h>
#include <string.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>debug purpose

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		if (((char *)src)[i] == (char)c)
			return (&((unsigned char *)dst)[i + 1]);
		i++;
	}
	return (NULL);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
// int		main(void)
// {
// 	// libc
// 	char	str1[] = "abcdefg";
// 	char	str2[] = "1234578";

// 	// ft
// 	char	str3[] = "abcdefg";
// 	char	str4[] = "1234578";

// 	// libc
// 	printf("   memccpy->%s\n   str1->%s\n", memccpy(str1, str2, '3', 5), str1);
// 	// ft
// 	printf("ft_memccpy->%s\n   str3->%s\n", ft_memccpy(str3, str4, '3', 5), str3);

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>debug purpose

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<unit-test
// int		main(void)
// {
// 	// char	buff1[] = "abcdefghijklmnopqrstuvwxyz";
// 	char	buff2[] = "abcdefghijklmnopqrstuvwxyz";
// 	char	*src = "string with\200inside !";

// 	// memccpy(buff1, src, '\200', 21);
// 	// ft_memccpy(buff2, src, '\200', 21);

// 	// printf("   memccpy->%s\n", memccpy(buff1, src, '\200', 21));
// 	printf("ft_memccpy->%s\n", ft_memccpy(buff2, src, '\200', 21));

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>unit-test
