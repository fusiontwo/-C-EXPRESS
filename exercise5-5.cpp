#include <stdio.h>

int main(void)
{
	printf("%f\n", 1.0 + 1.0 / 2.0);
	printf("%f\n", 1.0 + 1 / 2);
	printf("%f\n", 1.0 + 1.0 / 2);
	printf("%f\n", 1.0 + (double)1 / 2);

	return 0;
}