#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a;
	 
	printf("실수 입력: ");
	scanf("%lf", &a);

	printf("a = %.2f", a);  //소수점 이하 둘째 자리까지 출력
	return 0;
}
