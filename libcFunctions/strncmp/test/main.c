#include <stdio.h>
#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len > 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			len--;
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
	printf("pf:%d\n", ft_strncmp("2349857", "8889", 4));
	
	printf("ft:%d\n", ft_strncmp("2349857", "8889", 4));

	return (0);
}
