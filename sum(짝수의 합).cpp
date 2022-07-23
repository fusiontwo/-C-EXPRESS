#include <stdio.h>

int main(void)
{
	int i, n, sum;  // 변수 선언

	printf("정수를 입력하시오: ");  // 입력 안내 메시지 출력
	scanf("%d", &n);

	i = 0;
	sum = 0;

	while (i <= n)
	{
		sum += i;  // sum = sum + i;와 같다.
		i += 2;  // i = i + 1과 같다.
	}
	printf("1부터 %d까지의 짝수합은 %d입니다\n", n, sum);
	return 0;
}