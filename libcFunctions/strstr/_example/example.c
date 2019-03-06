#include <stdio.h>

char *strstr1(const char *str, const char *substring)
{
    const char *a;
    const char *b;

    b = substring;

    if (*b == 0) {
        return (char *) str;
    }

    for ( ; *str != 0; str += 1) {
        if (*str != *b) {
            continue;
        }

        a = str;
        while (1) {
            if (*b == 0) {
                return (char *) str;
            }
            if (*a++ != *b++) {
                break;
            }
        }
        b = substring;
    }

    return NULL;
}

int     main(void)
{
    char str[] = "ek9,dc5,ef9";
    char substr[] = "dc5";

    printf("ret.val.of.strstr1->%s\n", strstr1(str, substr));

    return (0);
}

// int main (void)
// {
//   char string[64] ="This is a test string for testing strstr";
//   char *p;

//   p = strstr1 (string,"test");

//   if(p)
//   {
//     printf("String found:\n" );

//     printf ("First occurrence of string \"test\" in \"%s\" is:\n%s", string, p);
//   }
//   else
//   {
//     printf("String not found!\n" );
//   }

//   return 0; 
// }
 