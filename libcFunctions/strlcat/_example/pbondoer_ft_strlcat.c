#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = 0;
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
