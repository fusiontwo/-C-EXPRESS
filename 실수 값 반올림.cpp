/* 실수 값이 양수일 때 반올림하는 프로그램 */
#include <stdio.h>

int main(void)
{
	float x;
	int round_x;

	printf("실수를 입력하시오: ");
	scanf("%f", &x);

	round_x = int(x + 0.5);
	printf("실수 값을 반올림했습니다. %d", round_x);

	return 0;
}