#include <stdio.h>

int main(void)
{
	int x, multiplication_number;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf("%d", &multiplication_number);

	printf("%d<<%d�� ��: %d", x, multiplication_number, x << multiplication_number);

	return 0;
}