#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void)
{
	int A[ROWS][COLS] = { { 2,3,0 },
		{ 8,9,1 },
		{ 7,0,5 } };
	int B[ROWS][COLS] = { { 1,0,0 },
		{ 1,0,0 },
		{ 1,0,0 } };
	int C[ROWS][COLS]; // 더한 값을 넣을 행렬도 만들기
	int r, c; // 행렬 요소들의 인덱스로 사용될 변수 r과 c(row와 column의 약자)

	// 두개의 행렬을 더한다.
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			C[r][c] = A[r][c] + B[r][c];

	// 행렬을 출력한다.
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
			printf("%d ", C[r][c]);
		printf("\n");
	}

	return 0;
}