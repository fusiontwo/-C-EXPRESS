// 포인터와 함수 (x와 y만 바뀌고, a와 b 값은 바뀌지 않는 잘못된 방법)
#include <stdio.h>
void swap(int x, int y);

int main(void)
{
	int a = 100, b = 200;

	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}

void swap(int x, int y)
{
	int tmp;

	printf("x=%d y=%d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d y=%d\n", x, y);
}