#include <stdio.h>
#include <math.h>
#define e 0.000001

double fabs(double a, double b);
double min(double a, double b);
double f_equal(double a, double b);

int main(void)
{
	double a, b;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &b);
	if (f_equal(a, b) == 1)
		printf("�� ���� �Ǽ��� ���� �ٻ������� ����");
	else
		printf("�� ���� �Ǽ��� ���� �ٸ�");
}

double fabs(double a, double b)
{
	return fabs(a - b);
}
double min(double a, double b)
{
	if (fabs(a) < fabs(b))
		return a;
	else
		return b;
}
double f_equal(double a, double b)
{
	double result = fabs(a, b) / min(a, b);
	if (result < e)
		return 1;
	else
		return 0;
}