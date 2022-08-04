#include <stdio.h>

void sub() {
	static int scount = 0; // 정적변수 선언, sub() 함수가 종료되어도 자동으로 소멸되지 않음, 이전 값이 유지되면서 증가
	int acount = 0; // 지역변수 선언, sub() 함수가 종료되면 자동 소멸
	printf("scount = %d\t", scount);
	printf("acount = %d\n", acount);
	scount++;
	acount++;
}

int main(void) {
	sub();
	sub();
	sub();
	return 0;
}