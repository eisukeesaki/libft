/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:07:09 by eesaki            #+#    #+#             */
/*   Updated: 2019/04/06 20:02:23 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
			ft_memdel((void **)&new); // TODO: test behavior
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

int		main(void)
{
	char	*data = "hello, i'm a data";
	// t_list	*l = ft_lstnew(data, strlen(data) + 1);
	t_list	*l = ft_lstnew(data, sizeof(int) * 21474836479999);

	if (!strcmp(data, l->content))
		printf("test succeeded\n");
	else
		printf("test failed\n");

	printf("l->content=>%s\n", l->content);

	return (0);
}
