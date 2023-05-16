int	ft_sqrt(int nb)
{
	int a;
	
	a = 2;
	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (a < nb)
	{
		if ((a * a) == nb)
			return (a);
		a++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("%d",ft_sqrt(0));
}
*\
