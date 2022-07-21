#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;
	int result;

	result = 2 > 3 || 6 > 7;  // 2>3 거짓(0)이고, 6>7도 거짓(0)이므로 연산의 최종 결과값도 0 
	printf("%d\n", result);

	result = 2 || 3 && 3 > 2;  // 관계연산자가 논리연산자보다 우선순위가 높으므로 3>2가 먼저 계산되어 참(1)
	printf("%d\n", result);    // (윗줄에 대한 주석) &&연산자가 ||연산자보다 우선순위가 높아 3&&1이 되고 계산값은 1, 2||1이 계산되어 최종 결과값은 1

	result = x = y = 1;  // 대입연산자 결합방향은 우에서 좌, y=1이 수행되어 x=1이 되고, result=x, 전체 수식의 값은 1
	printf("%d\n", result);

	result = - ++x + y--;
	printf("%d\n", result);

	return 0;
}