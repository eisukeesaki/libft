/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:35:08 by eesaki            #+#    #+#             */
/*   Updated: 2019/02/13 16:35:20 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *substr)
{
	int		is;
	int		isb;
	char	*p;

	is = 0;
	isb = 0;
	p = NULL;
	while (str[is] != substr[isb] && str[is] != '\0')
		is++;
	p = &str[is];
	while (substr[isb] == str[is])
	{
		isb++;
		is++;
	}
	isb--;
	if (substr[++isb] == '\0')
		return (p);
	else
		return (NULL);
}

int		main(void)
{
	char str[] = "ek9,dc5,ef9";
	char substr[] = "";

	printf("ret.val.of.ft_strstr->%s\n", ft_strstr(str, substr));

	return (0);
}
