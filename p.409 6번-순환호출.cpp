#include <stdio.h>

int recursive(int n);

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("%d", recursive(n));
}

int recursive(int n)
{
	if (n == 0) return 1;
	else return (n + recursive(n - 1));
}