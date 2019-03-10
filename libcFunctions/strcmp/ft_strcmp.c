/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 19:03:49 by eesaki            #+#    #+#             */
/*   Updated: 2019/02/17 19:03:52 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h> // debug purpose
// #include <stdio.h> // debug purpose

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// test purpose
// int		main(void)
// {
// 	// non ASCII
// 	// char	*s1 = "\x12\xff\x65\x12\xbd\xde\xad";
// 	// char	*s2 = "\x12\x02";

// 	// your strcmp does not cast in unsigned the diff
// 	char	*s1 = "\0";
// 	char	*s2 = "\200";

// 	printf("libc->%d\n  ft->%d\n", strcmp(s1, s2), ft_strcmp(s1, s2));

// 	return (0);
// }
// test purpose

// old version (passes all tests)
// int		ft_strcmp(const char *s1, const char *s2)
// {
// 	while (*s1 && *s2)
// 	{
// 		if (*s1 == *s2)
// 		{
// 			s1++;
// 			s2++;
// 		}
// 		else
// 			break;
// 	}
// 	return ((unsigned char)*s1 - (unsigned char)*s2);
// }
// old version (passes all tests)
