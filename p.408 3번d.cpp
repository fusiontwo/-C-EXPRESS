#include <stdio.h>
void f(void);

int main(void)
{
	f();
	f();
	return 0;
}
void f(void)
{
	static int count = 0; // 정적 변수이기 때문에 값이 초기화되지 않고 누적되어 출력
	printf("%d\n", count++);
}