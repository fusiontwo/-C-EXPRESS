#include <stdio.h>

int main(void) {
	double divisor, divident, sum;
	int loop_count;
	int a=2, b=3, c=4;

	divisor = a*b*c;
	divident = 4.0;
	sum = 3.0;
	printf("¹Ýº¹È½¼ö:");
	scanf("%d", &loop_count);

	while (loop_count > 0) {
		sum = sum + divident / divisor;
		divisor = divisor + 2;
		a += 2;
		b += 2;
		c += 2;
		loop_count--;
	}
	printf("Pi = %f\n", sum);
	return 0;
}