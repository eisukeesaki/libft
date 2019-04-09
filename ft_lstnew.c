/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:07:09 by eesaki            #+#    #+#             */
/*   Updated: 2019/04/08 13:57:50 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);

	if (content != NULL)
	{
		new->content = ft_memalloc(content_size);
		if (new->content == NULL)
		{
			ft_memdel((void **)&new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
	}
	else
	{
		new->content = NULL;
		content_size = 0;
	}
	new->next = NULL;
	return (new);
}
