#include <stdio.h>
#include <math.h>

double square(double num)
{
	return num * num;
}

int main(void)
{
	double n;
	printf("정수를 입력하시오: ");
	scanf("%lf", &n);
	printf("주어진 정수 %lf의 제곱은 %lf입니다.", n, square(n));
	return 0;
}

