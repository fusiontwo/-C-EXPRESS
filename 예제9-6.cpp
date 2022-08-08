#include <stdio.h>

int power(int base, int power_raised);
int main(void)
{
	int base, power_raised;
	printf("밑수: ");
	scanf("%d", &base);
	printf("지수: ");
	scanf("%d", &power_raised);
	printf("%d^%d = %d", base, power_raised, power(base, power_raised));
}
int power(int base, int power_raised)
{
	if (power_raised == 0)
		return 1;
	else
		return base * power(base, power_raised - 1);
}
