#include <stdio.h>
# define PI 3.141592

double cal_area(double radius)
{
	double area;
	area = PI * radius * radius;
	return area;
}

int main(void)
{
	double radius;
	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &radius);
	printf("원의 면적은 %lf입니다.", cal_area(radius));
	return 0;
}