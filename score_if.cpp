#include <stdio.h>

int main(void)
{
	int score;
	printf("점수를 입력하시오: ");
	scanf("%d", &score);

	if (score >= 80)
		if (score >= 90)
			printf("A학점입니다.\n");
		else
			printf("B학점입니다.\n");

	return 0;
}