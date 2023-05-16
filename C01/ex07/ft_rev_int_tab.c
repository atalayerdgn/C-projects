void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = size - 1;
	i = 0;
	while (i < j)
	{
		int	tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
#include <stdio.h>
int	main()
{
	int	arr[] = {1,2,3,4,5};
	int size = 5;
	ft_rev_int_tab(arr,size);
	printf("%d,%d,%d,%d,%d",arr[0],arr[1],arr[2],arr[3],arr[4]);

}
