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

char	ft_strcpy(char *to, char *from)
{
	int		i;

	i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}

	return (*to);
}
