#include <stdio.h>

int power(int base, int power_raised);
int main(void)
{
	int base, power_raised;
	printf("�ؼ�: ");
	scanf("%d", &base);
	printf("����: ");
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