#include <stdio.h>

int main(void)
{
	double x, function;
	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	if (x <= 0)
		function = x * x - 9 * x + 2;
	else
		function = 7 * x + 2;

	printf("f(x)�� ���� %lf", function);

	return 0;
}