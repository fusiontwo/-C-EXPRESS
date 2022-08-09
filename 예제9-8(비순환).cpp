#include <stdio.h>

int count(int num);

int main(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("자리수의 개수: %d", count(n));
}
int count(int num)
{
	static int count=1;
	while (num > 10)
	{
		num = num / 10;
		count++;
	}
	return count;
}
