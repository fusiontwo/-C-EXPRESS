#include <stdio.h>

int show_digit(int x);

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	show_digit(n);
	printf("\n");
	return 0;
}
int show_digit(int x)
{
	if (x < 10)
		return printf("%d ", x);
	else
		show_digit(x / 10);
	return printf("%d ", x%10);
}