#include <stdio.h>

int main(void)
{
	float f;
	float c;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%f", &f);

	c = (5.0 / 9.0) * (f - 32.0);
	printf("�������� %f���Դϴ�.", c);

	return 0;
}