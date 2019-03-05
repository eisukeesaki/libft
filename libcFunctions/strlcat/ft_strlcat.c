#include <stdio.h>

size_t	ft_strlcat(const char *dst, const char *src, size_t size)

int		main(void)
{
	// char s1[50] = "abc,.";
	// char s2[50] = "123^";

	char ft_s1[6] = "abcdef";
	char ft_s2[10] = "123";

	// printf("libc      ->%s\n", strncat(s1, s2, 4));
	printf("ft_strlcat->%lu\n", ft_strlcat(ft_s1, ft_s2, 8));

	return (0);
}
