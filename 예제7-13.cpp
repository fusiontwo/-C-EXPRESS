#include <stdio.h>

int main(void)
{
	int n, r, i;
	int result=1;

	printf("n의 값: ");
	scanf("%d", &n);

	printf("r의 값: ");
	scanf("%d", &r);

	for (i = n; i >= (n - r - 1); i--)
		result *= i;

	printf("순열의 값은 %d입니다.", result);
	return 0;
}