#include <stdio.h>

int		ft_atoi(char *str)
{
	long	value;
	int		sign;
	int		flag;

	value = 0;
	sign = 1;
	flag = 0;
	if (*str == '-')
		sign = -1;
	while (*str)
	{
		if (('0' <= *str) && (*str <= '9'))
		{
			value *= 10;
			value += (*str - '0');
			flag = 1;
		}
		else if (flag)
			break ;
		++str;
	}
	return (value * sign);
}

int		main(void)
{
	printf("%d\n", ft_atoi("00-000123abc"));

	return (0);
}
