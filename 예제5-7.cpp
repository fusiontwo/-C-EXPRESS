#include <stdio.h>

int main(void)
{
	int x, multiplication_number;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("2를 곱하고 싶은 횟수: ");
	scanf("%d", &multiplication_number);

	printf("%d<<%d의 값: %d", x, multiplication_number, x << multiplication_number);

	return 0;
}