#include <stdio.h>

int main(void)
{
	int n,i;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("약수: ");
	    for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
				printf("%d ", i);
		}
}
