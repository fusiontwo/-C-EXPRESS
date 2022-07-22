#include <stdio.h>

int main(void)
{
	int n;
	printf("변수의 값을 입력하시오: ");
	scanf("%d", &n);

	if (n >= 100)
		printf("large");
	else
		printf("small");

	return 0;
}