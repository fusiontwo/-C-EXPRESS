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
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);
	printf("���� ������ %lf�Դϴ�.", cal_area(radius));
	return 0;
}