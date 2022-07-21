#include <stdio.h>

int main(void)
{
	int x, y, quotient, remainder;

	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);
	quotient = x / y;
	remainder = x % y;

	printf("몫: %d 나머지: %d", quotient, remainder);

	return 0;
}