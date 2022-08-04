#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main(void)
{
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++) {
		printf("%d ", b_rand());
	}
	return 0;
}

int b_rand()
{
	return rand() % 2;
}