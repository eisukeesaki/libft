#include <stdio.h>
#include <string.h>

int		main(void)
{
	char s1[7] = "abcdef";
	char s2[4] = "123";

	printf("strlcat->%lu\ns1->%s\n", strlcat(s1, s2, 7), s1);

	return (0);
}
