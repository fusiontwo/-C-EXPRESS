#include <stdio.h>

int main(void)
{
	int i, j, num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		for (j = 1; j <= i + 1; j++) 
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}
