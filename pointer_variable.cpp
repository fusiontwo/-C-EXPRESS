# include <stdio.h>

int main(void)
{
	int i = 10;
	double f = 12.3;
	// 지역 변수로 포인터를 선언하고 초기화를 시키지 않으면 쓰레기값을 가진다.
	// 따라서 NULL 값을 저장하여 놓는 것이 좋고, NULL의 주소는 0이다.
	int *pi = NULL;  // 정수를 가리키는 포인터
	double *pf = NULL;  // double형 실수를 가리키는 포인터

	pi = &i; // 포인터 pi에 변수 i의 주소를 대입
	pf = &f; // 포인터 pf에 변수 f의 주소를 대입
	printf("%u %u\n", pi, &i);  // %u는 부호가 없는 10진 정수 형식으로 출력
	printf("%u %u\n", pf, &f);
	return 0;
}