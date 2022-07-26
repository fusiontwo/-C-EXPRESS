#include <stdio.h>

int main(void)
{
	int sum = 0, i, j;
	for (i = 10; i <= 30; i++)
		for (j = 0; j <= 5; j++)
			sum += i * j;
	printf("%d", sum);
	return 0;
}