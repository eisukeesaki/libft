#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	// printf("%d\n", atoi("-123abc")); // -123
	// printf("%d\n", atoi("def-123abc")); // 0
	// printf("%d\n", atoi("-12 3abc")); // -12
	// printf("%d\n", atoi("-12 3abc")); // -12
	printf("%d\n", atoi("000-123")); // 0

	return (0);
}