#include <stdio.h>

int round(double f);

int main(void)
{
	double x;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	printf("�ݿø��� ���� %d�Դϴ�.", round(x));
	return 0;
}

int round(double f)
{
	return (int)(f + 0.5);
}