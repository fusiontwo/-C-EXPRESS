#include <stdio.h>

int main(void)
{
	int nohome_period, age, family_number, result;

	printf("무주택 기간을 입력하시오: ");
	scanf("%d", &nohome_period);
	printf("가구주 연령을 입력하시오: ");
	scanf("%d", &age);
	printf("가족의 수를 입력하시오: ");
	scanf("%d", &family_number);

	result = ((nohome_period >= 3) && (age >= 40) && (family_number >= 3));
	printf("result=%d\n", result);

	return 0;
}