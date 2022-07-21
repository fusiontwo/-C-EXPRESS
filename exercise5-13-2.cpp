#include <stdio.h>

int main(void)
{
	int age, height, result;

	printf("나이를 입력하시오: ");
	scanf("%d", &age);
	printf("키를 입력하시오: ");
	scanf("%d", &height);

	result = ((age >= 6) && (height >= 150));
	printf("result=%d\n", result);

	return 0;
}