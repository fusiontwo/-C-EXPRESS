#include <stdio.h>

#define STUDENTS 5 // 기호 상수로 학생들의 수를 정의

int main(void)
{
	int scores[STUDENTS]; // 각 학생들의 성적을 저장할 크기가 5인 정수형 배열 선언
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]); // scores[i]는 배열 scores의 i번째 요소, 배열의 요소도 하나의 변수
	}

	for (i = 0; i < STUDENTS; i++) // 한 번의 반복마다 i번째 학생의 성적인 scores[i]가 sum에 더해진다.
		sum += scores[i];

	average = sum / STUDENTS;
	printf("성적 평균= %d\n", average);

	return 0;
}