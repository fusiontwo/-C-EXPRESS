#include <stdio.h>
int main(void)
{
	int n, r = 1, i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n == 0)
			r = r + 1;
		else
			r = r + i;
	}
	printf("%d", r);
}