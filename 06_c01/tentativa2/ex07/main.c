#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int size = 5;
	int arr[] = {1,2,3,4,5};
	int *ptr;
	
	ptr = arr;
	// int i = 0;
	// while (i < size)
	// {
	// 	printf("%d", *ptr);
	// 	i++;
	// }

	ft_rev_int_tab(ptr, size);
}