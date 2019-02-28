#include <stdio.h>
#include <string.h>

int		main(void)
{
	char dst[50] = "\0";
	char src[50] = "abcdef,.";

	printf("%s\n", strncpy(dst, src, 10));

	return (0);
}
