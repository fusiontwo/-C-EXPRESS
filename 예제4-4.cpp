#include <stdio.h>

int main(void)
{
	double d;
	double w;
	double h;
	double volume;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &w, &h, &d);
	
	volume = w * h * d;
	printf("������ ���Ǵ� %lf�Դϴ�.", volume);
}