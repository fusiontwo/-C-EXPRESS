#include <stdio.h>

void print_value(int n);

int main(void)
{
	int x;

	while (1)
	{
		printf("���� �Է��Ͻÿ�(����� ����): ");
		scanf("%d", &x);
		if (x < 0) {
			break;
		}
		print_value(x);
	}
	return 0;
}

void print_value(int n)
{
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}