#include <stdio.h>

int main(void)
{
	float mile;
	float meter;

	printf("마일을 입력하시오: ");
	scanf("%f", &mile);

	meter = mile * 1609;
	printf("%f마일은 %f미터입니다.", mile, meter);

	return 0;
}