#include <stdio.h>
int get_digit_sum(int n);

int main(void)
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("�ڸ����� ��: %d", get_digit_sum(n));
}
int get_digit_sum(int num) {
	if (num == 0) {
		return 0;
	}
	else {
		return (num % 10) + get_digit_sum(num / 10);
	}
}