#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *s1, char const *s2)
{
	int		i;
	
	i = 0;
	while(s1[i] != '\0')
		i++;
	while (*s2 != '\0')
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char s1[50] = "abc,.";
	char s2[50] = "def";

	// printf("original ->%s\n", strcat(s1, s2));
	printf("ft_strcat->%s\n", ft_strcat(s1, s2));

	return (0);
}
