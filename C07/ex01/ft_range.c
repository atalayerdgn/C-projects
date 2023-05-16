#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	size = max - min;
	i = 0;
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (0);
	if (min >= max)
		return (0);
	while (i < size)
	{
		arr[i] = min + 1;
		i++;
	}
	return (arr);
}
