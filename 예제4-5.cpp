#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main(void)
{
	int PYEONG;
	double SQMETER;

	printf("평을 입력하세요: ");
	scanf("%d", &PYEONG);

	SQMETER = PYEONG * SQMETER_PER_PYEONG;
	printf("%lf평방미터입니다.", SQMETER);

	return 0;
}