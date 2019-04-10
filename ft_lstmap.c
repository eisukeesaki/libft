/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:43:09 by eesaki            #+#    #+#             */
/*   Updated: 2019/04/10 14:55:39 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*head;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = f(ft_lstnew(lst->content, lst->content_size));
	head = new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new->next = f(ft_lstnew(lst->content, lst->content_size));
		new = new->next;
	}
	return (head);
}
