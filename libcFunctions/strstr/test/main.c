#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *str;
	char *sbstr;

	if (!*needle)
		return ((char *)haystack);
	
	while (*haystack)
	{
		str = (char *)haystack;
		sbstr = (char *)needle;

		while (*sbstr && *str == *sbstr)
		{
			str++;
			sbstr++;
		}

		if (*sbstr == '\0')
			return ((char *)haystack);

		haystack++;
	}
	return (NULL);
}

int		main(void)
{
	char str[] = "xdc2,dc5,ef9";
	char substr[] = "eg6";

	printf("ft_strstr()->%s\n", ft_strstr(str, substr));

	return (0);
}
