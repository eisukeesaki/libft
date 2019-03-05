#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && n > i)
	{
		dst[i] = src[i];
		i++;
	}

	while (n > i)
		dst[i++] = '\0';

	return (&dst[0]);
}

int		main(void)
{
	char dst[50] = "123456";
	char src[50] = "abcdefghijk";

	char ft_dst[50] = "123456";
	char ft_src[50] = "abcdefghijk";

	printf("libc->%s\n", strncpy(dst, src, 20));
	printf("ft  ->%s\n", ft_strncpy(ft_dst, ft_src, 20));	

	return (0);
}
