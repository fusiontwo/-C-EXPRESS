#include <stdio.h>

int main(void)
{
	int n,i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("���: ");
	    for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
				printf("%d ", i);
		}
}