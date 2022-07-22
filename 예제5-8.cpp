#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main(void)
{
	double radius, A, B;
	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &radius);

	A = 4 * pi * pow(radius, 2.0);
	B = (double(4) / double(3)) * pi * pow(radius, 3.0);

	printf("표면적은 %lf입니다.\n", A);
	printf("체적은 %lf입니다.\n", B);

	return 0;
}