/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisuke <eisuke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 16:59:21 by eisuke            #+#    #+#             */
/*   Updated: 2019/03/14 21:16:07 by eisuke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<debug purpose
// #include <stdio.h>
// #include <string.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>debug purpose

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<refactored
// void *ft_memset(void *b, int c, size_t len)
// {
// 	while (len > 0)
// 	{
// 		len--;
// 		((unsigned char *)b)[len] = (unsigned char)c;
// 	}
// 	return (b);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>refactored

void	*ft_memset(void *b, int c, size_t len)
{
	int	i = 0;
	
	while (len > 0)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
// int		main(void)
// {
// 	char str[] = "abcdefghijk";
// 	char str2[] = "abcdefghijk";

// 	printf("str     ->%s\nmemset  ->%s\n", str, memset(str + 3, '.', 3));
// 	printf("str2    ->%s\nft_memset->%s\n", str, ft_memset(str2 + 3, '.', 3));

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose
