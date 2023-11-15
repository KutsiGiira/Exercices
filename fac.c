#include <stdio.h>
int main ()
{
	int i, l;
	scanf("%i", &i);
	l = i - 1;
	if(i > 0)
	{
	while(l >= 1)
	{
		i = i * l;
		l--;
	}
	printf("%i\n", i);
	}
	else if(i == 0)
	{
		printf("1\n");
	}
	else
	{
		printf("imposible\n");
	}
}
