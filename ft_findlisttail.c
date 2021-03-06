/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findlisttail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 17:35:09 by eesaki            #+#    #+#             */
/*   Updated: 2019/10/06 17:36:34 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_findlisttail(t_list *alst)
{
	while (alst->next != NULL)
		alst = alst->next;
	return (alst);
}
