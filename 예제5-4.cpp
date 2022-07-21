#include <stdio.h>

int main(void)
{
	int feet;
	double height, inch;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &height);

	feet = height / 30.48;
	inch = (height % 30.48) / 2.54; // 실행하면 피트는 제대로 나오는데 5.118110인치로 오차가 있음, 이유 찾기..
	printf("%d는 %d피트 %lf인치입니다.", height, feet, inch);

	return 0;
}