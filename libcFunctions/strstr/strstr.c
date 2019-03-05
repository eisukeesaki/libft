#include <stdio.h>
#include <string.h>

int     main(void)
{
    char str[] = "ek9,dc5,ef9";
    char substr[] = "eg6";

    printf("strstr->%s\n", strstr(str, substr));

    return (0);
}

// int     main(void)
// {
//     char *p;
//     char str[] = "abcdef";

//     p = &str[2];

//     printf("%s\n", p);

//     return (0);
// }
