#include <stdio.h>

int fib(int n);
int main(void)
{
	int n,i;
	printf("n을 입력하시오: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
		printf("fib(%d) = %d\n", i, fib(i));
	return 0;
}
int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}
