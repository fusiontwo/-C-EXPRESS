// 복리이자계산
#include <stdio.h>

#define RATE 0.07            // 이율
#define INVESTMENT 1000000  // 초기 투자금
#define YEARS      10        // 투자 기간

int main(void)
{
	int i;
	double total = INVESTMENT;   // 원리금 합계

	printf("==============\n");
	printf("연도   원리금\n");
	printf("==============\n");

	for (i = 1; i <= YEARS; i++)
	{
		total = total * (1 + RATE);  // 새로운 원리금 계산
		printf("%2d %10.1f\n", i, total); // %2d는 2자리보다 작으면 여백을 추가해서 2자리를 확보, %10.1f는 10칸으로 출력하고 소수점 첫째 자리까지 표기
	}

	return 0;
}