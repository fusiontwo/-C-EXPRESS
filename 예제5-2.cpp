#include <stdio.h>

int main(void)
{
	double x, y;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	printf("%lf ", x + y);
	printf("%lf ", x - y);
	printf("%lf ", x * y);
	printf("%lf ", x / y);

	return 0;
}