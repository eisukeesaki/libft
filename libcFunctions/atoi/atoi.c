#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	char	*n = "-9223372036854775808";

	printf("libc->%d\n", atoi(n));

	return (0);
}
