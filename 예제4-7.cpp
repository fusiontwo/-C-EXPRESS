#include <stdio.h>

int main(void)
{
	double mass;
	double speed;
	double kenergy;

	printf("����(kg): ");
	scanf("%lf", &mass);

	printf("�ӵ�(m/s): ");
	scanf("%lf", &speed);

	kenergy = 0.5 * mass * speed * speed;
	printf("�������(J): %lf", kenergy);

	return 0;
}