#include <stdio.h>
double recursive(double n);
int main(void)
{
	double n, result;
	
	printf("n�� ���� �Է��ϼ���: ");
	scanf("%lf", &n);

	result = recursive(n);
	printf("%f", result);

	return 0;
}

double recursive(double n)
{
	if (n == 1)
		return 1;
	else
		return ((1 / n) + recursive(n - 1));
}