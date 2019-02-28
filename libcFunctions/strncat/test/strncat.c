#include <stdio.h>
#include <string.h>

int		main(void)
{
	char s1[50] = "abc";
	char s2[50] = "123";

	printf("%s\n", strncat(s1, s2, 2));

	return (0);
}
