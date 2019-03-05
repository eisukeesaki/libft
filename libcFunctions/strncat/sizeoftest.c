#include <stdio.h>

int		main(void)
{
	int i = 0;
	int size = 0;
	char str[10] = "abc";

	while (str[i])
		i++;
	
	size = sizeof(str) / sizeof(str[0]);

	printf("len->%d\nsize->%d\n", i, size);

	return (0);
}
