// 포인터와 배열의 관계
#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	// 배열의 요소의 주소값들을 부호없는 정수값으로 출력
	printf("&a[0] = %u\n", &a[0]);  // %u(unsigned int): 부호 없는 10진수 (4바이트)
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);
	// 배열 이름을 부호없는 정수값으로 출력(첫 번째 요소의 주소값과 동일)
	printf("a = %u\n", a);

	return 0;
}