#include <stdio.h>

int main(void)
{
	float x;
	float y;
	float z;
	float sum;
	float avg;

	printf("실수를 입력하시오: ");
	scanf("%f", &x);

	printf("실수를 입력하시오: ");
	scanf("%f", &y);

	printf("실수를 입력하시오: ");
	scanf("%f", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("합은 %f이고 평균은 %f입니다.", sum, avg);

	return 0;
}