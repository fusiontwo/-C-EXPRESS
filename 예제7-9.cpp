#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	i = 0;
	while (1) {
		if (sum > 10000)
			break;
		i++;
		sum += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", i-1, sum-i);
	return 0;
}