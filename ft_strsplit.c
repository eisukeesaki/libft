/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:51:29 by eesaki            #+#    #+#             */
/*   Updated: 2019/03/28 20:02:52 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
#include <stdio.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose

#include "libft.h"

// char	**ft_strsplit(char const *s, char c)
// void	ft_strsplit(char const *s, char c) /////////////////////// debug purpose
// {
// 	size_t	i;
// 	size_t	head;
// 	// size_t	tail;
// 	size_t	ctdlm;
// 	size_t	strnb;
// 	size_t	strsi;
// 	char	*strs[3][] = {}; // make init separate

// 	i = 0;
// 	head = 0;
// 	// tail = 0;
// 	ctdlm = 0;
// 	strnb = 0;
// 	strsi = 0;

// 	while (s[ctdlm] != c) // implement exception: beggining & end
// 		ctdlm++;

// 		while (s[i] != c)
// 			i++;

// 		strs[strnb] = ft_strnew(i - head);

// 		while (s[head] != c)
// 			strs[strnb++][strsi++] = s[head++];
		
// 		strnb++;
// 	}
	
// }

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
int		main(void)
{
	char	str[] = "dc2,dc5,ek9";
	char	dlm = ',';
	char	**dstr = NULL;
	size_t	i = 0;

	dstr = ft_strsplit(str, dlm);

	while (dstr[i])
	{
		printf("%s\n", dstr[i]);
		i++;
	}
	
	return (0);
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose

/**
- count words
- allocate memory for all words (nb of words + 1)
	- protect
1 find next word to assign
2 assign ptr(of freshly created str) to word
3 move ptr(of original str) to dlm
- repeat from 1 until last word is assigned
- assign NULL to last space for words to return
 **/
