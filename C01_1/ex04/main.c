#include <stdio.h>
#include "ft_ultimate_div_mod.c"
int main()
{
	int a = 4;
	int b = 3;

	ft_ultimate_div_mod(&a,&b);
	printf("%d\n%d\n",a,b);
	return 0;
}
