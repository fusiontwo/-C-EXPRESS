#include <stdio.h>

int main(void)
{
	int i, j, num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		for (j = 1; j <= i + 1; j++) 
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}