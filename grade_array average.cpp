#include <stdio.h>
#define STUDENTS 5

int get_average(int scores[], int size); // 함수 원형을 정의, 배열을 받는 매개변수는 크기를 적지 않아도 된다.

int main(void)
{
	int scores[STUDENTS] = { 1, 2, 3, 4, 5 };
	int avg;

	avg = get_average(scores, STUDENTS);
	printf("평균은 %d입니다.\n", avg);

	return 0;
}
// 배열에 들어 있는 값들의 평균을 계산하는 함수
int get_average(int scores[], int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
		sum += scores[i];

	return sum / size;
}