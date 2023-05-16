int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	numbofminus;
	
	res = 0;
	sign = 1;
	numbofminus = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if(*str == '-')
			numbofminus++;
		str++;
	}
	if (numbofminus % 2)
		sign = -1;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
/*#include <stdio.h>
int	main()
{
	printf("%d",ft_atoi("   ---+--+1234ab567");
}
\*
