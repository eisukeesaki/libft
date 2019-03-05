# strncat()

## declaration
```c
#include <string.h>
char *strncat(char *dst, const char *src, size_t n);
```


----------


## what is does
It appends a copy not more than n characters from src to the end of string dst, then add a terminating `\0'.

The length of the string to be appended will be either the length of n, or length of src, WHICHEVER IS SMALLER.


----------


## notes
 - string dst must have sufficient space to hold the result.
 - The source and destination strings should not overlap, as the behavior is undefined.


----------


## return value
pointer dst


----------


## behaviors (what ifs)

 - **length of array dst is smaller than n**

throws;

compilation error: "will always overflow destination buffer"

because there is not enough space in dst to append n characters of src.
size orders


----------


 - **length of array dst is greater than n, but less than (dst + n + 1)**

compiles without errors, but it will abort during execution because dst does not have sufficient space to append src + 1


----------

 - **length of array dst is less than n**

throws;

compilation error: "will always overflow destination buffer"

even if there is enough space in array dst

----------


**length orders and results**
```
dst > (src + 1) > n		---> returns 0

dst == n > (src + 1)	---> returns 0

(src+ 1) > dst > n		---> aborts

n > dst > (src + 1)		---> compilation error
```

## my implementation
```c
char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	k;
	
	i = 0;
	k = 0;
	while(dst[i] != '\0')
		i++;
	while(src[k] != '\0')
		k++;
	if ((i + 1) < (k + n))
		abort();
	k = 0;
	while (src[k] && k < n)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (dst);
}
```

## test program
```c
int		main(void)
{
	char str1[10] = "abc";
	char str2[10] = "123";

	printf("%s\n", strtrncat(str1, str2, 5));

	return (0);
}
```
