#include <stdio.h>

int main(void)
{
	double x, y, result;

	printf("�ΰ��� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);
	result = x + y;   // ���� ������ �Ͽ��� ����� result�� ����
	printf("%f + %f = %f\n", x, y, result);

	result = x - y;   // ���� ������ �Ͽ��� ����� result�� ����
	printf("%f - %f = %f\n", x, y, result);

	result = x * y;   // ���� ������ �Ͽ��� ����� result�� ����
	printf("%f * %f = %f\n", x, y, result);

	result = x / y;   // ������ ������ �Ͽ��� ����� result�� ����
	printf("%f / %f = %f\n", x, y, result);
	
	return 0;
}