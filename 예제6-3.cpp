#include <stdio.h>

int main(void)
{
	int x, y, z, min;
	printf("3개의 정수를 입력하시오:");
	scanf(" %d %d %d", &x, &y, &z);

	if (x < y)
		min = x;
	else
		min = y;
	if (min < z)
		min = min;
	else
		min = z;

	printf("제일 작은 정수는 %d입니다.", min);
	return 0;
}