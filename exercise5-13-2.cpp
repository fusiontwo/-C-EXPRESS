#include <stdio.h>

int main(void)
{
	int age, height, result;

	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);
	printf("Ű�� �Է��Ͻÿ�: ");
	scanf("%d", &height);

	result = ((age >= 6) && (height >= 150));
	printf("result=%d\n", result);

	return 0;
}