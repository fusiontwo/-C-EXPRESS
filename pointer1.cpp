#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL;  // 포인터의 선언 및 초기화

	p = &i;  // 변수 i의 주소를 p에 대입한다.

	printf("p = %u\n", p);  // p가 가리키는 주소에서 데이터를 읽어온다.
	printf("&i = %u\n\n", &i);

	printf("i = %d\n", i);
	printf("*p = %d\n", *p);  // 포인터를 이용한 간접 참조

	return 0;
}