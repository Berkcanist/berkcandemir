#include <stdio.h>
#include "ft_swap.c"
int main()
{
	int a;
    int	b;

	a = 1;
	b = 2;

	ft_swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
