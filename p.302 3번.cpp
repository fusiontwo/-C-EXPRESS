#include <stdio.h>

int main(void)
{
	int i;
	for (i = 1; i < 10; i++) {
		if (i % 3 == 0) break;
		printf("%d ", i);
	}
	return 0;
}