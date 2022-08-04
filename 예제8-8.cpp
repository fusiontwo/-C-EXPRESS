#include <stdio.h>
#include <math.h>
#define PI 3.141592

double sin_degree(double degree);

int main(void) 
{
	double angle;

	for (angle = 0; angle <= 180; angle += 10)
	{
		printf("sin(%lf)ÀÇ °ªÀº %lf \n", angle, sin_degree(angle));
	}
	return 0;
}

double sin_degree(double degree)
{
	return sin((PI * degree) / 180.0);
}

