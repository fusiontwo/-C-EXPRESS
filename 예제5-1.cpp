#include <stdio.h>

int main(void)
{
	int x, y, quotient, remainder;

	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);
	quotient = x / y;
	remainder = x % y;

	printf("��: %d ������: %d", quotient, remainder);

	return 0;
}