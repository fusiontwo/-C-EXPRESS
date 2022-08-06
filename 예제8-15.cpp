#include <stdio.h>

void is_prime(int a);

int main(void) 
{
	int a=0;
	is_prime(a);
	return 0;
}

void is_prime(int a)
{
	int i, j, isPrime;
	for (i = 2; i <= 100; i++)
	{
		isPrime = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
			printf("%d ", i);
	}
}
