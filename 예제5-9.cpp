#include <stdio.h>

int main(void)
{
	double BC, AC, AE, DE;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &BC);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &AC);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &AE);

	DE = (AE * BC) / AC;
	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.", DE);

	return 0;
}