#include <stdio.h>

int main(void)
{
	double mass;
	double speed;
	double kenergy;

	printf("질량(kg): ");
	scanf("%lf", &mass);

	printf("속도(m/s): ");
	scanf("%lf", &speed);

	kenergy = 0.5 * mass * speed * speed;
	printf("운동에너지(J): %lf", kenergy);

	return 0;
}