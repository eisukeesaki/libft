/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisuke <eisuke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 12:49:28 by eisuke            #+#    #+#             */
/*   Updated: 2019/03/14 16:31:17 by eisuke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<debug purpose
// #include <string.h>
// #include <stdio.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>debug purpose

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;

	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	// if ((char)c == '\0')
	// 	return (*s[i]);
	return (NULL);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
// int		main(void)
// {
// 	char	s[] = "the cake is a lie !\0I'm hidden lol\r\n";

// 	printf("libft->%s\n", strrchr(s, ' '));
// 	printf("  ft->%s\n", ft_strrchr(s, ' '));

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose
