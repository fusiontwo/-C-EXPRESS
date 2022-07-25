#include <stdio.h>

int main(void)
{
	int grade, n;
	double sum, average;
	
	// 필요한 변수들을 초기화한다.
	n = 0;
	sum = 0;
	grade = 0;

	printf("종료하려면 음수를 입력하시오\n");

	// 성적을 입력받아서 합계를 구하고 학생 수를 센다.
	while (grade >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;  // 위쪽에서 센티널값도 합계에 포함되었다. 반복 루프가 끝나면 센티널 값을 합계와 개수에서 제거해야 한다.
	n--;
	// 평균을 계산하고 화면에 출력한다.
	average = sum / n;
	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}