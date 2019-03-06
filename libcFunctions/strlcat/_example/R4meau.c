#include <stdio.h>
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	int			j;
	size_t		dst_len;
	size_t		src_len;

	i = strlen(dst);
	j = 0;
	dst_len = strlen(dst);
	src_len = strlen(src);
	if (size < dst_len + 1)
		return (src_len + size);
	if (size > dst_len + 1)
	{
		while (i < size - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}

int		main(void)
{
	char s1[6] = "abcdef";
	char s2[10] = "123";

	printf("strlcat->%lu\n", ft_strlcat(s1, s2, 8));

	return (0);
}
