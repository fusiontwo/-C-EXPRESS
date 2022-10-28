// 포인터의 증감 연산
#include <stdio.h>

int main(void)
{
	char *pc;  // char형 포인터 pc 선언
	int* pi;  // int형 포인터 pi 선언
	double* pd;  // double형 포인터 pd 선언

	pc = (char*)10000;  // pc에 절대 주소 10000을 대입
	pi = (int*)10000;  // pi에 절대 주소 10000을 대입
	pd = (double*)10000;  // pd에 절대 주소 10000을 대입
	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	// 증가 연산자 사용
	pc++;
	pi++;
	pd++;
	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	// 포인터에 정수를 더하기
	printf("pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc + 2, pi + 2, pd + 2);

	return 0;
}