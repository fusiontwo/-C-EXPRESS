#include <stdio.h>

int main(void)
{
	int n;
	printf("������ ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	if (n >= 100)
		printf("large");
	else
		printf("small");

	return 0;
}