#include <stdio.h>

int show_digit(int x);

int main(void)
{
	int n;
	printf("정수를 입력하시오: ");
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
