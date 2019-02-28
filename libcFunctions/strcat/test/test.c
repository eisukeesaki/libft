#include <stdio.h>

char	*func(char *s)
{
	s++;
	return (&s[0]);
}

int		main(void)
{
	char str[] = "abcdef";

	printf("%s\n", func(str));

	return (0);
}
