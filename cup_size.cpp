#include <stdio.h>

int main(void)
{
	int cup_size;
	printf("���� ����� �Է��Ͻÿ�: ");
	scanf("%d", &cup_size);

	if (cup_size < 100)
		printf("small");
	else if (cup_size < 200)
		printf("medium");
	else
		printf("large");
	
	return 0;
}