#include <stdio.h>

int main(void)
{
	double x, y;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	printf("%lf ", x + y);
	printf("%lf ", x - y);
	printf("%lf ", x * y);
	printf("%lf ", x / y);

	return 0;
}