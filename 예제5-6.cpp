#include <stdio.h>

int main(void)
{
	int x, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	result = ~x;
	result += 1;
	
	printf("2�� ����: %d\n", result);

	return 0;
}