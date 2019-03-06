#include <stdio.h>

int		main(void)
{
	char s[7] = "abc";
	char *pts = s;

	printf("  s->%lu\n", sizeof(s) / sizeof(s[0]));
	printf("pts->%lu\n", sizeof(pts) / sizeof(pts[0]));
	
	
	return (0);
}
