/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:51:29 by eesaki            #+#    #+#             */
/*   Updated: 2019/03/29 18:03:15 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
#include <stdio.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose

#include "libft.h"

static inline size_t	ft_words(char const *s, char d)
{
	size_t	w;

	w = 0;
	while (*s == d && *s)
		s++;
	while (*s)
	{
		while (*s != d && *s)
			s++;
		w++;
		while (*s == d && *s)
			s++;
	}
	return (w);
}

static inline size_t	wordlen(char const *s, char d)
{
	size_t l;

	l = 0;
	while (s[l] && s[l] != d)
		l++;
	return (l);
}

static inline char	*next_word(char const *s, char d)
{
	while (*s == d && *s)
		s++;
	return ((char *)s);
}

// void	ft_strsplit(char const *s, char c) /////////////////////// debug purpose
char	**ft_strsplit(char const *s, char c)
{
	char	**split;
	size_t	wc;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	wc = ft_words(s, c);
	if (!(split = (char **)ft_memalloc((wc + 1) * sizeof(char *))))
		return (NULL);
	while (i < wc)
	{
		s = next_word((char *)s, c);
		split[i] = ft_strsub(s, 0, wordlen(s, c));
		i++;
		s += wordlen(s, c);
	}
	split[wc] = NULL;
	return (split);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<test purpose
int		main(void)
{
	char	str[] = ",pasu,,chobi,nachan,";
	char	dlm = ',';
	char	**dstr = NULL;
	size_t	i = 0;

	dstr = ft_strsplit(str, dlm);

	while (dstr[i])
	{
		printf("%s\n", dstr[i]);
		i++;
	}

	ft_strsplit(str, dlm);

	return (0);
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>test purpose

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<ft_words, wordlen test
// int		main(void)
// {
// 	char	str[] = "pasu,,chobi,nachan";
// 	char	dlm = ',';

// 	printf("ft_words->%zu\n", ft_words(str, dlm));
// 	printf("wordlen->%zu\n", wordlen(str, dlm));

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ft_words, wordlen test

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
