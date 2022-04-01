#include <stdio.h>
#include "ft_div_mod.c"
int main()
{
	int a = 2;
	int b = 1;
	int c;
	int d;
	ft_div_mod(a,b,&c,&d);
	printf("%d\n%d\n%d\n%d",a,b,c,d);
	return 0;
}
