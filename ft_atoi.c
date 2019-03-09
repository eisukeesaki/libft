/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:24:11 by eesaki            #+#    #+#             */
/*   Updated: 2019/02/14 17:24:40 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> // debug purpose
// #include <stdlib.h> // debug purpose

int		ft_atoi(const char *str)
{
	int		val;
	int		flag;
	int		sign;

	val = 0;
	flag = 0;
	sign = 1;
	while (*str <= '0' && *str >= '9')
	{
		if (*str == '-')
		{
			sign = -1;
			break;
		}
		str++;
	}	
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			val *= 10;
			val += *str - '0';
			flag = 1;
		}
		else if (flag)
			break;
		str++;
	}
	return (val * sign);
}

// debug purpose
// int		main(void)
// {
// 	char	*n = "\t\v\f\r\n \f-06050";

// 	printf("libc->%d\n", atoi(n));
// 	printf("  ft->%d\n", ft_atoi(n));

// 	return (0);
// }
// debug purpose
