#include <stdio.h>
int main ()
{
	int n,v,l;
	v = 1;
	n = 2;
	scanf("%i", &l);
	while(n <= l)
	{
		v = v + n;
		n++;
	}
	printf("the addition of number 1 to %i equals = %i\n", l, v);
}
