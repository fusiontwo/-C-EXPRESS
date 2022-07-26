#include <stdio.h>

int main(void)
{
	int i = 0;
	do
	{
		printf("%d\n", i);
		i += 3;
	} while (i < 10);
}