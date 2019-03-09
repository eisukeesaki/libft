#include <stdio.h>

int		main(void)
{
	char s[7] = "abc";
	char *pts = s;

	printf("sizeof(char *)->%lu\n", sizeof(char *));

	printf("  sizeof(s)->%lu\n", sizeof(s));
	printf("sizeof(pts)->%lu\n", sizeof(pts));

	printf("    sizeof(s) / sizeof(s[0])->%lu\n", sizeof(s) / sizeof(s[0]));
	printf("sizeof(pts) / sizeof(pts[0])->%lu\n", sizeof(pts) / sizeof(pts[0]));
	
	return (0);
}
