#include <stdio.h>

int main(void)
{
	int x, y,z;

	for (y = 1; y <= 7; y++)
	{
		for (z = 1;z + y <= 7; z++)
			printf(" ");
		for (x = 0; x < y; x++)
			printf("*");

	printf("\n");
	}
	return 0;
}