#include <stdio.h>

int main(void)
{
	int grade, TOFEL_grade, TOEIC_grade, result;

	printf("학점을 입력하시오: ");
	scanf("%f", &grade);

	printf("TOFEL 점수를 입력하시오: ");
	scanf("%d", &TOFEL_grade);

	printf("TOEIC 점수를 입력하시오: ");
	scanf("%d", &TOEIC_grade);

	result = ((grade >= 3.0) && ((TOFEL_grade >= 300) || (TOEIC_grade >= 700)));
	printf("result=%d \n", result);

	return 0;
}