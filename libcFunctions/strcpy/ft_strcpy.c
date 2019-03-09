/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:41:10 by eesaki            #+#    #+#             */
/*   Updated: 2019/02/12 12:41:20 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // debug purpose
#include <string.h> // debug purpose

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// debug purpose
int		main(void)
{
	char	*src = "--> nyancat <--\n\r";
	char	dst1[30];
	char	dst2[30];

	char	*libc;
	char	*ft;

	libc = ft_strcpy(dst1, src);
	ft = ft_strcpy(dst2, src);

	printf("libc->%s\n  ft->%s\n", libc, ft);

	return (0);
}
// debug purpose
