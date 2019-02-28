#include <stdio.h>
#include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);
	}
	return (0);
}

int		main(void)
{
	printf("pf:%d\n", strcmp("8888", "9asoi"));
	
	printf("ft:%d\n", ft_strcmp("8888", "9asoi"));

	return (0);
}
