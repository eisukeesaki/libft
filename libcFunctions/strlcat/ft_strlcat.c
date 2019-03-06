#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	int		dlen;

	i = 0;
	k = 0;

	if ((sizeof(dst) / sizeof(dst[0]) - 1) < size)
		abort();

	while (dst[i])
	{
		i++;
		// dst++;
	}

	while (src[k] && k < size)
	{
		// *dst = src[k];
		// dst++;
		dst[i] = src[k];
		i++;
		k++;
	}

	return (i + strlen(src));
}

int		main(void)
{
	// char s1[7] = "abc";
	// char s2[4] = "123";

	char ft_s1[7] = "abc";
	char ft_s2[4] = "123";

	// printf("   strlcat->%lu\n", strlcat(s1, s2, 8));
	printf("ft_strlcat->%lu\n", ft_strlcat(ft_s1, ft_s2, 8));

	return (0);
}
