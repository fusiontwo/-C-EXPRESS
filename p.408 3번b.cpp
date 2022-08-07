// 지역 변수가 전역 변수보다 우선이지만, f함수는 값을 반환하지 않아서 전역 변수인 n=10이 출력됨
#include <stdio.h>

void f(int);
int n = 10;
int main(void)
{
	f(n);
	printf("n=%d\n", n);
	return 0;
}
void f(int n)
{
	n = 20;
}