#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main(void)
{
	int PYEONG;
	double SQMETER;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &PYEONG);

	SQMETER = PYEONG * SQMETER_PER_PYEONG;
	printf("%lf�������Դϴ�.", SQMETER);

	return 0;
}