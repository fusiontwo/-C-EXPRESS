#include <stdio.h>

int main(void)
{
	float x;
	float polynomial_expression;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%f", &x);

	polynomial_expression = 3 * x * x + 7 * x + 11;
	printf("���׽��� ���� %f", polynomial_expression);

	return 0;
}