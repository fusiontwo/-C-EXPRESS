#include <stdio.h>

int main(void)
{
	int n, i;
	int a=0, b=1, c;
	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &n);

	printf("0, 1, ");

	for (i = 0; i < n - 1; i++) {
			c = a + b;
			a = b;
			b = c;
			printf("%d, ", c);
	}
	return 0;
}
