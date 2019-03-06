#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	char *a;
	char *b;

	// if there is no sbstr to look for, return s1
	if (*s2 == '\0')
		return ((char *)s1);
	// loop until \0 of str
	while (*s1)
	{
		a = (char *)s1; // assign pointer to s1 to a
		b = (char *)s2; // assign pointer to s2 to b
		// loop until \0 of sbstr && str == sbstr
		while (*b && *a == *b)
		{
			a++; // shift pointer to next elm in str
			b++; // shift pointer to next elm in sbstr
		}
		// after exiting comparison loop above, if *b points to \0, 
		if (*b == '\0')
			return ((char *)s1); // return ptr to s1
		s1++; // shift ptr to next elm in s1
	}
	return (NULL); // if L25 doesn't execute, sbstr doesn't exist. thus return NULL
}

int		main(void)
{
	char str[] = "eg6,dc2,dc5,ef9";
	char substr[] = "dc5";

	printf("ret.val.of.ft_strstr->%s\n", ft_strstr(str, substr));

	return (0);
}
