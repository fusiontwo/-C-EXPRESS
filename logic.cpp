#include <stdio.h>

int main(void)
{
	int x, y;

	printf("두개의 정수를 입력하시오: ");
	scanf("%d%d", &x, &y); // 0이 아닌 정수는 참, 0은 거짓

	printf("%d && %d의 결과값: %d\n", x, y, x && y);
	printf("%d || %d의 결과값: %d\n", x, y, x || y);
	printf("!%d의 결과값: %d\n", x, !x);
	return 0;
}