#include <stdio.h>
#include <stdlib.h>
#define ROWS 3  // 3행
#define COLS 5  // 5열

int main(void)
{
	int s[ROWS][COLS]; // 2차원 배열 선언
	int i, j; // 2개의 인덱스 변수

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			s[i][j] = rand() % 100;
			printf("%02d ", s[i][j]);
		}
		printf("\n");
	}
	return 0;
}