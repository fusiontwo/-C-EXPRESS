#include <stdio.h>

int main(void)
{
	int code1;
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &code1);

	printf("문자:%c입니다.", code1);

	return 0;
}