#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d%d", &x, &y); // 0�� �ƴ� ������ ��, 0�� ����

	printf("%d && %d�� �����: %d\n", x, y, x && y);
	printf("%d || %d�� �����: %d\n", x, y, x || y);
	printf("!%d�� �����: %d\n", x, !x);
	return 0;
}