#include <stdio.h>

int main(void)
{
	int x, y, z, big_number;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	big_number = (x > y) ? x : y;
	printf("%d \n", (big_number > z) ? big_number : z);

	return 0;
}