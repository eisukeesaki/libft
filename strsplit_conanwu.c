#include "libft.h"
#include <stdio.h>

int	cw_countw(char const *s, char c)
{
	int start;
	int count;

	count = 0;
	while (*s)
	{
		start = 1;
		while (*s && *s == c)
		{
			start = 0;
			s++;
		}
		while (*s && *s != c)
		{
			start = 1;
			s++;
		}
		(start ? count++ : 1);
	}
	return (count);
}

int	cw_wordl(char const *s, char c, int i)
{
	size_t l;

	l = 0;
	while (s[i] && s[i] != c)
	{
		l++;
		i++;
	}
	return (l);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**r;
	size_t	i;
	int		j;

	if (!s || !(r = (char**)malloc(sizeof(char*) * (cw_countw(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (j < cw_countw(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		r[j] = ft_strsub(s, i, cw_wordl(s, c, i));
		j++;
		i += cw_wordl(s, c, i);
	}
	r[j] = 0;
	return (r);
}

int		main(void)
{
	char	str[] = "ap2,dc5,ek9";
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
