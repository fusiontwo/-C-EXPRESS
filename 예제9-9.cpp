#include <stdio.h>
int get_digit_sum(int n);

int main(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("자리수의 합: %d", get_digit_sum(n));
}
int get_digit_sum(int num) {
	if (num == 0) {
		return 0;
	}
	else {
		return (num % 10) + get_digit_sum(num / 10);
	}
}