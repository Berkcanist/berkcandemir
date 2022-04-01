#include <stdio.h>
#include "ft_rev_int_tab.c"

int main()
{
	int i[9] = {1,2,3,4,5,6,7,8,9};
	int size = 9;
	int j = 0;
	ft_rev_int_tab(i, size);
	
	while (j < size)
	{
		printf("%d ",i[j]);
		j++;
	}
	return 0;
}
