#include <stdio.h>
#include <math.h>

double square(double num)
{
	return num * num;
}

int main(void)
{
	double n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &n);
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", n, square(n));
	return 0;
}

