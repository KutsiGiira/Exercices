#include <stdio.h>
int main ()
{
	int p , n, o;
	printf("password = 1234\nGive the password\n");
	scanf("%i", &p);
	n = 1;
	o = 2;
	while(p != 1234 && n <= 3)
	{
		while(o >= 0)
		{
		printf("FALSE\nRetype password (attemps left %i): ",o);
		scanf("%i", &p);
		n++;
		o--;
		}
	}
	if(p == 1234)
	{
	printf("CODE CORRECT");
	}
	else
	{
	printf("CODE PUK");
	}
}
