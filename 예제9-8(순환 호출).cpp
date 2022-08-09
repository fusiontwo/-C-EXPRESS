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
	if (num == 0) {
		return 0;
	}
	else {
		return 1 + count(num / 10); // 순환 호출
	}
}
