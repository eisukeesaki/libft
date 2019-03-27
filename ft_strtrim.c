/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 19:13:19 by eesaki            #+#    #+#             */
/*   Updated: 2019/03/26 20:19:19 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
#include <stdio.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	head;
	size_t	tail;
	char	*str;
	
	head = 0;
	tail = ft_strlen(s);

	while (ft_iswhitespace(s[head]))
		head++;



	str = ft_strnew(tail - head); // protect

	return (str);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
int		main(void)
{
	char const	str[] = " \t\na b\tc\ndefg \t\n";

	printf("%s\n", ft_strtrim(str));

	return (0);
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose
