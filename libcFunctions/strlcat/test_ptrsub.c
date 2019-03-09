#include <stdio.h>

// void	func(char *str)
// {
// 	char *p;
// 	size_t *buf;

// 	p = str + 2;
	
// 	buf = p - str;

// 	printf("%s\n", buf);
// }

int		main(void)
{
	char str[4] = "abc";
	char *a = &str[0];
	const char *c = &str[3];
	size_t res = a - c;
	
	printf("%zu\n", res);

	return (0);
}
