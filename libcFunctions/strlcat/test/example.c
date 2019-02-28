#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	// find 
	while (dst[i] && i < size)
		i++;
	while (src[k] && (i + k + 1) < size)
	{
		dst[i + k] = src[k];
		k++;
	}
	if (i < size)
		dst[i + k] = 0;
	return (i + strlen(src));
}

int		main(void)
{
	// char s1[50] = "abc,.";
	// char s2[50] = "123^";

	char ft_s1[10] = "abc";
	char ft_s2[10] = "123";

	// printf("libc      ->%s\n", strncat(s1, s2, 4));
	printf("ft_strlcat->%lu\n", ft_strlcat(ft_s1, ft_s2, 6));

	return (0);
}
