#include <stdio.h>

int main(void)
{
	int i, height;
	
	do {
		printf("막대의 높이(종료: -1): ");
		scanf("%d", &height);
		for (i = 1; i <= height; i++)
			printf("*");
		printf("\n");
	} while (height != -1);
	return 0;
}