#include <stdio.h>

int recursive(int n);

int main(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("%d", recursive(n));
}

int recursive(int n)
{
	if (n == 0) return 1;
	else return (n + recursive(n - 1));
}