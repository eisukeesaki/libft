#include <stdio.h>

int		ft_atoi(char *str)
{
	int		val;
	int		flag;
	int		sign;

	val = 0;
	flag = 0;
	sign = 1;
	if (*str == '-')
		sign = -1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			val *= 10;
			val += *str - '0';
			flag = 1;
		}
		else if (flag)
			break;
		str++;
	}
	return (val * sign);
}

int		main(void)
{
	printf("%d\n", ft_atoi("-12ab"));

	return (0);
}
