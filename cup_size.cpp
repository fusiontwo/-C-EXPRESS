#include <stdio.h>

int main(void)
{
	int cup_size;
	printf("컵의 사이즈를 입력하시오: ");
	scanf("%d", &cup_size);

	if (cup_size < 100)
		printf("small");
	else if (cup_size < 200)
		printf("medium");
	else
		printf("large");
	
	return 0;
}