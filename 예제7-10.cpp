#include <stdio.h>

int main(void)
{
	double r;
	int n, i;
	double result = 1.0;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &r);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		result *= r;
	printf("������� %f\n", result);
		
	return 0;
}