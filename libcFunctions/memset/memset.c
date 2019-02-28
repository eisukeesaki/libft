#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void *memset(void *buf, int ch, size_t n);

void	*ft_memset(void *buf, int c, int n)
{
	while (n > 0)
	{
		char *p = buf;
		*p = c;
		p++;
		n--;
	}
	return (p);
}

int		main(void)
{
	char str[] = "abcdefghijk";

	printf("%s\n", str);

	// memset(str+5, '5', 3);

	ft_memset(str+5, '5', 3);


	printf("%s\n", str);

	return (0);
}