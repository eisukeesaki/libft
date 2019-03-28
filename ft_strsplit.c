/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:51:29 by eesaki            #+#    #+#             */
/*   Updated: 2019/03/27 20:42:12 by eesaki           ###   ########.fr       */
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

// 	while (ctdlm-- > 0)
// 	{
// 		while (s[i] != c)
// 			i++;

// 		strs[strnb] = ft_strnew(i - head);

// 		while (s[head] != c)
// 			strs[strnb++][strsi++] = s[head++];
		
// 		strnb++;
// 	}
	
// }

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<pbondoer

int		ft_countwords(char *str, char sep)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (str[i] && str[i] == sep)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != sep)
			i++;
		result++;
		while (str[i] && str[i] == sep)
			i++;
	}
	return (result);
}

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}

static size_t	word_len(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		*next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static void		cleanup(char **split, size_t cur)
{
	while (cur > 0)
	{
		cur--;
		ft_strdel(&split[cur]);
	}
	ft_strdel(split);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	size_t	cur;
	size_t	wordcount;

	wordcount = ft_countwords((char *)s, c);
	split = (char **)ft_memalloc((wordcount + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	cur = 0;
	while (cur < wordcount)
	{
		s = next_word(s, c);
		split[cur] = ft_strsub(s, 0, word_len(s, c));
		if (split[cur] == NULL)
		{
			cleanup(split, cur);
			return (NULL);
		}
		cur++;
		s += word_len(s, c);
	}
	split[wordcount] = NULL;
	return (split);
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>pbondoer

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<logankaser
// static int		word_size(const char *chr, char d)
// {
// 	int size;

// 	size = 0;
// 	while (*chr && *chr != d)
// 	{
// 		++size;
// 		++chr;
// 	}
// 	return (size);
// }

// static size_t	num_words(const char *str, char d)
// {
// 	size_t num;

// 	num = 0;
// 	while (*str)
// 	{
// 		if (*str != d && (*(str + 1) == d || *(str + 1) == '\0'))
// 			++num;
// 		++str;
// 	}
// 	return (num);
// }

// char			**ft_strsplit(const char *str, const char d)
// {
// 	char		**split_words;
// 	size_t		size;
// 	size_t		w_size;
// 	unsigned	w;
// 	unsigned	chr;

// 	size = num_words(str, d) + 1;
// 	NULL_GUARD(split_words = malloc(sizeof(char*) * size));
// 	w = 0;
// 	while (w < size - 1)
// 	{
// 		while (*str == d)
// 			++str;
// 		w_size = word_size(str, d);
// 		split_words[w] = malloc(w_size + 1);
// 		NULL_GUARD(split_words[w]);
// 		split_words[w][w_size] = '\0';
// 		chr = 0;
// 		while (chr < w_size)
// 			split_words[w][chr++] = *str++;
// 		++w;
// 	}
// 	split_words[size - 1] = 0;
// 	return (split_words);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>logankaser

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
 * find head
 * find tail
 * count nb of dlm
 * scan from head todlm 
 * store dlm position
 * store range of str
 * strnew and assign str
 * scan from last found dlm to nextdlm 
 * repeat until tail
 **/
