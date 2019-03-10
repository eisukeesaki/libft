#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (dst[i] && i < dstsize)
		i++;
	if (i == dstsize)
		return (dstsize + ft_strlen(src));
	while (src[k] && (i + k + 1) < dstsize)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + ft_strlen(src));
}


int		main(void)
{
	// char s1[7] = "abc";
	// char s2[4] = "123";

	char ft_s1[7] = "abcdef";
	char ft_s2[4] = "123";

	// printf("   strlcat->%lu\n", strlcat(s1, s2, 7));
	// printf("return value->%lu\nft_s1->%s", ft_strlcat(ft_s1, ft_s2, 8), ft_s1);

	printf("return value->%lu\nft_s1->%s", ftn_strlcat(ft_s1, ft_s2, 7), ft_s1);

	return (0);
}

// file checker test cases
// int main(void)
// {
// 	char		dest[50] = {0};
// 	char		dest2[50] = {0};
// 	size_t		i, j, k;

// 	int a, b;

// 	if ((a = strlcat(dest, "Hello ", 4)) != (b = ft_strlcat(dest2, "Hello ", 4)))
// 		printf("TEST1 failed because a = %d and b = %d\n", a, b);
// 	memset(dest, 0, sizeof(dest));
// 	memset(dest2, 0, sizeof(dest));
// 	j = strlcat(dest, "Hello ", 4);
// 	k = ft_strlcat(dest2, "Hello ", 4);
// 	if (strcmp(dest, dest2) != 0 || j != k)
// 		printf("TEST2 failed because %s != %s \n", dest, dest2);
// 	// "Hel'\0'"
// 	j = strlcat(dest, "Hello ", 1);
// 	k = ft_strlcat(dest2, "Hello ", 1);
// 	if (strcmp(dest, dest2) != 0 || j != k)
// 		printf("TEST3 failed because %s != %s || %zu != %zu\n", dest, dest2, j, k);
// 	i = 0;
// 	while (i < 6)
// 	{
// 		dest[4 + i] = 'z';
// 		dest2[4 + i] = 'z';
// 		++i;
// 	}
// 	j = strlcat(dest, "abc", 6);
// 	k = ft_strlcat(dest2, "abc", 6);
// 	if (strcmp(dest, dest2) != 0 || j != k)
// 		printf("TEST4 failed\n");
// 	return (1);
// }

// 
