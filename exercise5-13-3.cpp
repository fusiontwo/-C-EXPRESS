#include <stdio.h>

int main(void)
{
	int grade, TOFEL_grade, TOEIC_grade, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &grade);

	printf("TOFEL ������ �Է��Ͻÿ�: ");
	scanf("%d", &TOFEL_grade);

	printf("TOEIC ������ �Է��Ͻÿ�: ");
	scanf("%d", &TOEIC_grade);

	result = ((grade >= 3.0) && ((TOFEL_grade >= 300) || (TOEIC_grade >= 700)));
	printf("result=%d \n", result);

	return 0;
}