#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	int				i;
	unsigned int	k;
	int				flag;

	i = 0;
	k = 0;
	flag = 0;
	while (src[k] != '\0')
		k++;
	if (len > k)
		flag = 1;
	while (len > 0)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	if (flag)
		dst[i] = '\0';

	return (&dst[0]);
}

int		main(void)
{
	char dst[50] = "123456789";
	char src[50] = "abcdef";

	char ft_dst[50] = "123456789";
	char ft_src[50] = "abcdef";

	printf("libc->%s\n", strncpy(dst, src, 20));
	printf("ft  ->%s\n", ft_strncpy(ft_dst, ft_src, 20));	

	return (0);
}
