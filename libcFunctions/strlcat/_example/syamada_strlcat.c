#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		size;
	size_t		dlen;

	size = dstsize;
	d = dst;
	s = src;
	while (size-- && *d)
		d++;
	dlen = d - dst;
	size = dstsize - dlen;
	if (size == 0)
		return (dlen + strlen(s));
	while (*s)
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

int		main(void)
{
	// char s1[7] = "abc";
	// char s2[4] = "123";

	char ft_s1[7] = "abc";
	char ft_s2[4] = "123";

	// printf("   strlcat->%lu\n", strlcat(s1, s2, 8));
	printf("ft_strlcat->%lu\nft_s1->%s\n", ft_strlcat(ft_s1, ft_s2, 6), ft_s1);

	return (0);
}
