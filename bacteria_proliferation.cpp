#include <stdio.h>

int main(void)
{
	double initial;
	double current;
	int hours;

	hours = 0;
	initial = 10;
	current = initial;
	while (hours < 7)
	{
		hours += 1;
		current *= 4;
		printf("%d시간 후의 세균의수=%f\n", hours, current);
	}
	
	return 0;
}