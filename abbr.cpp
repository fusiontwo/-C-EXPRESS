#include <stdio.h>

int main(void)
{
	int x = 10, y = 10, z = 33;

	x += 1;       // x = x + 1
	y *= 2;       // y = y * 2 
	z %= 10 + 20; // z = z % 30

	printf("x = %d y = %d z = %d \n", x, y, z);
	return 0;
}