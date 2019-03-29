#include "libft.h"
#include <stdio.h>

int	ft_get_word_count(char const *s, char c)
{
	int num;

	num = 0;
	while (*s)
	{
		if (*s != c)
		{
			num++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (num);
}

int	ft_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		wc;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	wc = ft_get_word_count(s, c);
	if (!(arr = (char **)malloc(sizeof(*arr) * (wc + 1))))
		return (NULL);
	while (wc--)
	{
		while (*s == c && *s != '\0')
			s++;
		arr[i] = ft_strsub(s, 0, ft_word_len(s, c));
		if (arr[i] == NULL)
			return (NULL);
		s = s + ft_word_len(s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
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
