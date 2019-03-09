#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	k;
	
	i = 0;
	k = 0;
	while(dst[i] != '\0')
		i++;
	while (src[k] && k < n)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (dst);
}

int		main(void)
{
	char str1[7] = "abc";
	char str2[4] = "123";
	
	printf("%s\n", ft_strncat(str1, str2, 20));
	return (0);
}


// int		main(void)
// {
// 	// char dst[50] = "abc,.";
// 	// char src[50] = "123^";

// 	char ft_s1[10] = "abc";
// 	char ft_s2[10] = "123";

// 	// printf("libc      ->%s\n", strncat(dst, src, 4));
// 	printf("ft_strncat->%s\n", ft_strncat(ft_s1, ft_s2, 5));

// 	return (0);
// }
