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
		printf("%d�ð� ���� �����Ǽ�=%f\n", hours, current);
	}
	
	return 0;
}