int	ft_iterative_power(int nb, int power)
{
	int	res;
	res = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		res *= nb;
		power--;
	}	
}
#include <stdio.h>
int	main()
{
	printf("%d",ft_iterative_power(5,3));
}
