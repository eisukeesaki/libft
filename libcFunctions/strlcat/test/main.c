#include <string.h>
#include <stdio.h>

char	*ft_strlcat(char *s1, char const *s2, size_t n)
{
	int		i;
	
	i = 0;
	while(s1[i] != '\0')
		i++;
	while (n > 0)
	{
		s1[i] = *s2;
		i++;
		s2++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char s1[50] = "abc,.";
	char s2[50] = "123^";

	char ft_s1[50] = "abc,.";
	char ft_s2[50] = "123^";

	printf("libc      ->%s\n", strncat(s1, s2, 4));
	printf("ft_strlcat->%s\n", ft_strlcat(ft_s1, ft_s2, 4));

	return (0);
}
