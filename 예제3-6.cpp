#include <stdio.h>

int main(void)
{
	float weight_on_earth;
	float weight_on_moon;

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf("%f", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;
	printf("�޿����� �����Դ� %fkg�Դϴ�.", weight_on_moon);

	return 0;
}