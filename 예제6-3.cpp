#include <stdio.h>

int main(void)
{
	int x, y, z, min;
	printf("3���� ������ �Է��Ͻÿ�:");
	scanf(" %d %d %d", &x, &y, &z);

	if (x < y)
		min = x;
	else
		min = y;
	if (min < z)
		min = min;
	else
		min = z;

	printf("���� ���� ������ %d�Դϴ�.", min);
	return 0;
}