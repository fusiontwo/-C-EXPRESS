#include <stdio.h>

int main(void)
{
	float mile;
	float meter;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &mile);

	meter = mile * 1609;
	printf("%f������ %f�����Դϴ�.", mile, meter);

	return 0;
}