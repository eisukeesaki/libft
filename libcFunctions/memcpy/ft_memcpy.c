/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 12:12:31 by eesaki            #+#    #+#             */
/*   Updated: 2019/03/15 20:32:58 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<debug purpose
#include <string.h>
#include <stdio.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>debug purpose

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	// size_t	i;

	// i = 0;
	// while (n > i)
	// {
	// 	((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	// 	i++;
	// }

	while (n > 0)
	{
		n--;
		((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
// int		main(void)
// {
// 	char str1[] = "abcdefg";
// 	char str2[] = "1234567";

// 	char str3[] = "abcdefg";
// 	char str4[] = "1234567";

// 	printf("libc->%s\n", memcpy(str1, str2, 3));
// 	printf("ft  ->%s\n", ft_memcpy(str3, str4, 3));

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose
