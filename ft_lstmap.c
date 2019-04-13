/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:43:09 by eesaki            #+#    #+#             */
/*   Updated: 2019/04/12 16:59:58 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline static void	free_lst(t_list *lst)
{
	t_list	*next;

	while (lst != NULL)
	{
		next = lst->next;
		ft_memdel((void **)&lst);
		lst = next;
	}
}

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*head;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = f(ft_lstnew(lst->content, lst->content_size));
	head = new;
	while (lst->next != NULL)
	{
		new->next = ft_lstnew(lst->content, lst->content_size);
		if (new->next == NULL)
		{
			free_lst(head);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	return (head);
}
