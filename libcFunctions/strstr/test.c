#include <stdio.h>

int		main(void)
{
	char str[] = "abcdef";
	char *p = str;

	if (p[6] == 0)
		printf("if is true");

	return (0);
}