#include <stdio.h>
#include <string.h>

int		main(void)
{
	char to[] = "00000";
	char from[] = "11\n11";

	strcpy(to, from);

	printf("%s", to);

	return(0);
}

