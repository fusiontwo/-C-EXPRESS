#include <stdio.h>

int main(void)
{
	int x, a, b;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	a = x / 10;
	b = x % 10;
	printf("���� �ڸ�: %d\n", a);
	printf("���� �ڸ�: %d\n", b);

	return 0;
}