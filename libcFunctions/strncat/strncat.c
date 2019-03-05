#include <stdio.h>
#include <string.h>

// size orders
// dst > (src + 1) > n		---> returns 0
// dst == n > (src + 1)	---> returns 0
// (src+ 1) > dst > n		---> aborts
// n > dst > (src + 1)		---> compilation error


// (dst size) > ((src size) + 1) > n
// prints <abc12> then returns 0
// int		main(void)
// {
// 	char str1[10] = "abc";
// 	char str2[4] = "123";
	
// 	printf("%s\n", strncat(str1, str2, 2));
// 	return (0);
// }

// ((src size) + 1) > (dst size) > n
// aborts (str1 does not have sufficient space to append str2)
// int		main(void)
// {
// 	char str1[4] = "abc";
// 	char str2[4] = "123";

// 	printf("%s\n", strncat(str1, str2, 3));
// 	return (0);
// }

// n > (dst size) > ((src size) + 1)
// compilation error: "will always overflow destination buffer"
int		main(void)
{
	char str1[10] = "abc";
	char str2[4] = "123";
	
	printf("%s\n", strncat(str1, str2, 20));
	return (0);
}

// n > (dst size) > ((src size) + 1)
// compilation error: "will always overflow destination buffer"
// int		main(void)
// {
// 	char str1[7] = "abc";
// 	char str2[] = "\0";
	
// 	printf("%s\n", strncat(str1, str2, 8));
// 	return (0);
// }

// (dst size) == n > ((src size) + 1)
// prints <abc123> then returns 0
// int		main(void)
// {
// 	char str1[7] = "abc";
// 	char str2[4] = "123";
	
// 	printf("%s\n", strncat(str1, str2, 7));
// 	return (0);
// }
