#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main(void)
{
	double radius, A, B;
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	A = 4 * pi * pow(radius, 2.0);
	B = (double(4) / double(3)) * pi * pow(radius, 3.0);

	printf("ǥ������ %lf�Դϴ�.\n", A);
	printf("ü���� %lf�Դϴ�.\n", B);

	return 0;
}