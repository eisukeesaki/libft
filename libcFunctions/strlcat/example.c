#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
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
	char s1[7] = "abcdef";
	char s2[4] = "123";

	printf("ft_strlcat->%lu\ns1->%s\n", ft_strlcat(s1, s2, 7), s1);

	return (0);
}
