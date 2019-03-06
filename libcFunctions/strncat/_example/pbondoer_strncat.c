#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char ft_s1[10] = "abc";
	char ft_s2[10] = "123";

	printf("ft_strncat->%s\n", ft_strncat(ft_s1, ft_s2, 5));

	return (0);
}
