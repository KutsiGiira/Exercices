#include <stdio.h>
int main ()
{
	int height, width;
	int m, n;
	printf("height ?\n");
	scanf("%i", &height);
	printf("width ?\n");
	scanf("%i", &width);
	for(n = 0; n < height; n++)
	{
	for(m = 1; m <= width; m++)
	{
		printf("0");
	}
	printf("\n");
	}
}
