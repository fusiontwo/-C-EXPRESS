#include <stdio.h>
#define pi 3.14

int main(void)
{
	double distance, angle,r;
	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &distance);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &angle);

	r = (180 * distance) / (pi * angle);
	printf("������ �������� %lf", r);

	return 0;
}