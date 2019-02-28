#include <stdio.h>
#include <string.h>

int		main(void)
{
	char s1[10] = "abc";
	char s2[10] = "123";

	char s3[10] = "abc";
	char s4[10] = "123";
	int rtval = 0;

	// printf("%s\n", strncat(s1, s2, 20));
	// printf("%lu\n", strlcat(s3, s4, 3));
	strncat(s1, s2, 3);
	rtval = strlcat(s3, s4, 3);

	return (0);
}
