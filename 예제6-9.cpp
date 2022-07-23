#include <stdio.h>

int main(void)
{
	double x, function;
	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	if (x <= 0)
		function = x * x - 9 * x + 2;
	else
		function = 7 * x + 2;

	printf("f(x)의 값은 %lf", function);

	return 0;
}