#include <stdio.h>

char	ft_strcpy(char *to, char *from)
{
	int		i;

	i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}

	return (*to);
}


int		main(void)
{
	char to[] = "0000";
	char from[] = "1111";

	ft_strcpy(to, from);

	printf("%s", to);

	return (0);
}

