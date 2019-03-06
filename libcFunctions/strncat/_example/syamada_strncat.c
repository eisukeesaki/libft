#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)malloc(sizeof(char) * n + 1);
	i = 0;
	while (i < n)
	{
		tmp[i] = s2[i];
		i++;
	}
	tmp[i] = '\0';
	strcat(s1 + strlen(s1), tmp);
	free(tmp);
	return (s1);
}

int		main(void)
{
	char str1[4] = "abc";
	char str2[10] = "123";

	printf("%s\n", ft_strncat(str1, str2, 3));
	return (0);
}
