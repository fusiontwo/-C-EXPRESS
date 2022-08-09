#include <stdio.h>
int main(void)
{
	int i;
	int score[5]; // 각 학생들의 성적을 저장할 크기가 5인 배열을 선언한다.

	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[3] = 40;
	score[4] = 50;

	for (i = 0; i < 5; i++)
		printf("grade[%d]=%d\n", i, score[i]);
	return 0;
}