#include <stdio.h>

int main(void)
{
	int x, y;
	printf("��ǥ(x y): ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1��и�");
	else if (x < 0 && y > 0)
		printf("2��и�");
	else if (x < 0 && y < 0)
		printf("3��и�");
	else if (x > 0 && y < 0)
		printf("4��и�");
	else
		printf("��� ��и鿡�� ������ �ʽ��ϴ�.");

	return 0;
}