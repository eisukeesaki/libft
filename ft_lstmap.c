/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:43:09 by eesaki            #+#    #+#             */
/*   Updated: 2019/04/10 14:51:38 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
#include <stdio.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose

#include "libft.h"

// t_list	*func(t_list *p)
// {
// 	p->content = NULL;
// 	return (p);
// }

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

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
// int		main(void)
// {
// 	t_list	*mapped = NULL;

// 	t_list	*ex_ls = ft_lstnew(strdup("content of ex_ls"), 17);
// 	t_list	*new_ls = ft_lstnew(strdup("content of new_ls"), 18);

// 	ft_lstadd(&ex_ls, new_ls);

// 	t_list	*head = new_ls;
// 	t_list	*p = head;

// 	mapped = ft_lstmap(p, &func);

// 	while (mapped != NULL)
// 	{
// 		printf("mapped->content=>%s\n", mapped->content);
// 		mapped = mapped->next;
// 	}

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose
