#include <stdio.h>
#define pi 3.14

int main(void)
{
	double distance, angle,r;
	printf("거리를 입력하시오: ");
	scanf("%lf", &distance);
	printf("각도를 입력하시오: ");
	scanf("%lf", &angle);

	r = (180 * distance) / (pi * angle);
	printf("지구의 반지름은 %lf", r);

	return 0;
}