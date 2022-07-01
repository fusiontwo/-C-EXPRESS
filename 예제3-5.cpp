#include <stdio.h>

int main(void)
{
	float x;
	float polynomial_expression;

	printf("실수를 입력하세요: ");
	scanf("%f", &x);

	polynomial_expression = 3 * x * x + 7 * x + 11;
	printf("다항식의 값은 %f", polynomial_expression);

	return 0;
}